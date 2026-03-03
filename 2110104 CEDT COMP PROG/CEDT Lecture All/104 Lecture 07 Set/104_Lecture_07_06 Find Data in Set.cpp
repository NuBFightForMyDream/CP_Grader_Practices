# include <iostream> 
# include <vector>
# include <algorithm>
# include <utility>
# include <set>
using namespace std ; 

int main() { 
    // insert data into set
    set<int> s ;
    int N = 10000 ; 
    for (int i = 0 ; i < N ; i++) { 
        s.insert(i) ; 
    }

    int c = 0 ; // value 

    auto begin = s.begin() ; auto end = s.end() ; 
    for (int i = 0 ; i < N ; i++) { 

        // Find like this is too slow (find like vector)
        c += (* find(begin , end , i) == i ) ; // found each num 1 time -> total val = N

        // but using find in set is more faster
        c += (* s.find(i) ) ; 
    }

    cout << c << endl ; // N = 10000
}