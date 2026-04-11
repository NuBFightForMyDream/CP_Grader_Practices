# include <iostream> 
# include <vector>
# include <set> 
using namespace std ; 

int main() { 
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int count_range , count_check ; 
    cin >> count_range >> count_check ; 

    set<int> num_in_interval ; 

    // loop 1 : input number 
    for (int i = 0 ; i < count_range ; i++) { 
        // 1 : input number
        int left , right ; 
        cin >> left >> right ; 

        // 2 : checkcondition then add number to set 
            // case 1 : left = right -> add to set 
        if (left == right) {
            num_in_interval.insert(left) ; 
        }
            // case 2 : general case
        else { 
            for (int num = left ; num <= right ; num++) { 
                num_in_interval.insert(num);
            }
        }
    }

    // loop 2 : check number
    for (int j = 0 ; j < count_check ; j++) { 
        int num_check ; cin >> num_check ; 
        
        // find number with find in set 
        if ( num_in_interval.find(num_check) != num_in_interval.end() ) { // found 
            cout << "1" << " " ; 
        }
        else {  // not found
            cout << "0" << " " ; 
        }
    }



}