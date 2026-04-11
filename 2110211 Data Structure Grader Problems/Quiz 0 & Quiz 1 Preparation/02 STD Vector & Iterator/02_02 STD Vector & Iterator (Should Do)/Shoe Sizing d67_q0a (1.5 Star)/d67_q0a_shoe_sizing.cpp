# include <iostream>
# include <vector> 
# include <set> 
# include <algorithm> 
# include <cmath>
using namespace std ; 

int main() { 
    // shoe-size guaranteed have different values , maybe using set is better 

    // Step 1 : input data
    long long count_store_shoe_size ; cin >> count_store_shoe_size ; 
    long long count_customer_shoe_size ; cin >> count_customer_shoe_size ; 
    vector<long long> store_shoe_size ; 

    for (long long i = 0 ; i < count_store_shoe_size ; i++) {
        long long shoe_size ; cin >> shoe_size ; 
        store_shoe_size.push_back(shoe_size);
    }

    // sort store shoe size 
    sort(store_shoe_size.begin() , store_shoe_size.end()) ; 

    // Step 2 : loop check with lower bound 
    for (long long i = 0 ; i < count_customer_shoe_size ; i++) {
        long long current_shoe_size ; cin >> current_shoe_size ; 
        
        // lower bound and check value thta is most fit
        auto most_fit_itr = lower_bound(store_shoe_size.begin() , store_shoe_size.end() , current_shoe_size) ; 
       
        // case 1 : customer feet > biggest store feet -> get biggest shoe possible
        if (most_fit_itr == store_shoe_size.end()) { 
            long long best_fit_size = *(store_shoe_size.end() - 1) ; // which is equal store.end() [end - 1 = last element]
            cout << best_fit_size << " " ; 
        }

        // case 2 : customer feet < smallest store feet -> get biggest shoe possible
        else if (most_fit_itr == store_shoe_size.begin()) { 
            long long best_fit_size = *(most_fit_itr) ; // which is equal store.begin() ; 
            cout << best_fit_size << " " ; 
        }

        // case 3 : smaller store feet < customer feet < bigger store feet -> check distance for best fit 
        else { 
            long long bigger_fit_size = *most_fit_itr ; 
            long long smaller_fit_size = *(most_fit_itr - 1) ; 
            if ( abs(current_shoe_size - bigger_fit_size) <= abs(current_shoe_size - smaller_fit_size) ) { // bigger size win
                long long best_fit_size = bigger_fit_size ; 
                cout << best_fit_size << " " ; 
            }
            else { 
                long long best_fit_size = smaller_fit_size ; 
                cout << best_fit_size << " " ; 
            }
        }
    }
}