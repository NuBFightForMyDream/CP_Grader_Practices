# include <iostream> 
# include <cmath> 
# include <algorithm> 
# include <string>
# include <iomanip> // for setprecision()
using namespace std ; 


// defining new function
void func_name( int parameter1 , bool parameter2 ) {
    // void is how function return type
    // parameters should always have type !!!

    // Part I : function body 
    string s ; 
    s = to_string(parameter1) + to_string(parameter2) ; 
    cout << s << endl ; 

    // Part II : return value 
        // in this function is void so no need to return 
        // normally return 0 but with int function
}

int main() {
    // call some basic function
    double bignumber = 1288752839276139.7213193021320130213929213738219321038218392139219329392193219 ; 

    // not returning value (setprecision)
    cout << setprecision(15) << bignumber << endl ; // 15 decimal pts behind full stop
    // return value 
    int max_value = max(4 , 7) ; 
    cout << max_value << endl ; // find max between two numbers (only two)

    // call some defined function
    func_name( 1234 , true ) ; // just call the function, don't use cout
}
