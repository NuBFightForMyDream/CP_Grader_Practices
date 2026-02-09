# include <iostream>
# include <tuple> 
using namespace std ; 

int main() {
    // define tuple : tuple<...> tuple_name = {...}
    tuple<string , float , int> t1 = {"SPJ123" , 225.50 , 20} ; 
    tuple<string , float , int> t2("SAD123" , 112.50 , 4) ; 
    tuple<string , float , int> t3 = make_tuple("DADDY12" , 54.50 , 5) ; 

    // change value in tuple
    get<0>(t2)  = "HAPPYNATTEE" ; 
    cout << get<0>(t2) << get<1>(t2) << endl ;
    
    // get element using get<pos>
    cout << get<1>(t2) << endl ; // get position 1 of t2 
    // cant use variable inside get<> like 
        // k = 7 ; get<k> => ERROR!!
    
    // comparing tuple (like list comparison in python)
    tuple<string , int , int> tpl1 = make_tuple("AB" , 12 , 25) ; 
    tuple<string , int , int> tpl2 = make_tuple("B" , 8 , 12) ; 
    tuple<string , int , int> tpl3 = make_tuple("B" , 8 , 99) ; 

    // compare tuple from left to right
    cout << "Tuple 1 < Tuple 2 : " << (tpl1 < tpl2) << endl ; // 1 = true
    cout << "Tuple 2 < Tuple 3 : " << (tpl2 < tpl3) << endl ; // 1 = true

}