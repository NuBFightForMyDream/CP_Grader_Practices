# include <iostream>
# include <vector> 
# include <utility> // pair
# include <tuple>
using namespace std ; 

int main() {
    // itr represent for index (iterator in vector<int> type)
    vector <int> fibo = {0,1,1,2,3,5,8,13};
    vector <int> :: iterator itr = fibo.begin() ;
    while (itr != fibo.end() ) {
        cout << *itr << endl ; // *itr to get data from index
        itr = itr + 1 ; // move index
    }
    // Note 
        // ++itr , --itr for moving index
        // v.end() for next of last element (NOT LAST !!!!)

    // Another way to use vector<int>::iterator -> auto (compiler will automatically think which type to use)
    vector <int> my_vec = {1,2,3,4,5} ; 
    auto it = my_vec.begin() ; // iterator type
    while (it != my_vec.end() ) { // for loop each element until end
        cout << *it << endl ;
        ++it ; // add it by 1 (not recommend to use ++)
    }

    // Another Auto Examples
    vector <int> prime_number = {2,3,5,7,11,13} ; 
    auto v2 = vector<int>() ; // v2 = vector<int> 
    auto v3(v1) ; // v3 copied value from v1 (v3 = vector<int>)
    auto looper = v3.end() ; // looper = iterator type 

    // vector of pair 
    vector< pair<char,int> > vector_of_pair = { {'A',3} , {'B',6} } ;
    auto pair0 = vector_of_pair[0] ; // pair0 = pair<char , int>
    auto ch = pair0.first ; // char
    auto num = pair0.second ; // int

    
}