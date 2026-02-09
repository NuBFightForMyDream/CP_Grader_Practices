# include <utility> // for std::pair
# include <iostream>
using namespace std ; 

int main() {
    // create pair (like in tuple creation)
    pair <string , int> pair1 = {"SAD" , 2} ; 
    pair <string , int> pair2("HAPPY" , 10) ; 
    pair <string , int> pair3 = make_pair("NORMAL" , 100) ;
    
    // get element by .first / .second instead
    cout << pair2.first << pair3.second << endl ; 
    
    // change value in pair
    pair2.second = 115 ; 
    pair2.first = "NATTEE" ; 

    // compare pair
    cout << "Pair 1 < Pair 2 : " << (pair1 < pair2) << endl ; 
    cout << "Pair 2 < Pair 3 : " << (pair2 < pair3) << endl ; 

}

    
