# include <iostream> 
# include <vector> 
using namespace std ; 

int main() { 
    int N ; cin >> N ; 

    // 1 : input 
    int count_even = 0 , count_odd = 0 , total_stock = 0 ; 
    for (int i = 0 ; i < N ; i++) { 
        int stock ; cin >> stock ; 

        // check condition 
        total_stock += stock ; 

        if (stock % 2 == 0) count_even++ ;
        else count_odd++ ; 
    }

    // 3 : print output
    cout << "SUM " << total_stock << endl << "EVEN " << count_even << endl << "ODD " << count_odd << endl ; 

}