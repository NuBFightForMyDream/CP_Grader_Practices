# include <iostream>
# include <vector>
# include <algorithm>
# include <set>
using namespace std ; 

int main() { 
    vector<int> unique_count ; 
    int num ;
    while (cin >> num) { // ctrl+d for stop input
        // check if number not in vector
        if (find(unique_count.begin() , unique_count.end() , num) == unique_count.end()) { // not found
            unique_count.push_back(num); 
        }
    }

    // sort vector
    sort(unique_count.begin() , unique_count.end()) ;
    cout << (int)unique_count.size() << endl ;

    // print out element (check if <10 element first)
    if (unique_count.size() > 10) {
        for (int i = 0 ; i < 10 ; i++) { 
            cout << *(unique_count.begin() + i) << " " ;
        }
    }
    else { 
        for (int i = 0 ; i < unique_count.size() ; i++) { 
            cout << *(unique_count.begin() + i) << " " ;
        }
    }
    cout << endl ; 

}