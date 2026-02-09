# include <iostream> // i/o
# include <string> // string
using namespace std ; // namespace std

int main() {
    // declare & input
    string mobile_number ; 
    cin >> mobile_number ;

    // substr to check -> got str
    if (mobile_number.length() == 10 && 
        (mobile_number.substr(0,2) == "06" || 
         mobile_number.substr(0,2) == "08" ||
         mobile_number.substr(0,2) == "09") ) 
         {
            cout << "Mobile number" << endl ;
         }

    else {
        cout << "Not a mobile number" << endl ;
    }
}