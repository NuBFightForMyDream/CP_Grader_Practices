# include <iostream> // i/o
# include <string> // string
using namespace std ; 

int main() {
    // define & input
    string check_status ; 
    cin >> check_status ; 

    // check if in range (create)
    if (check_status == "01" || check_status == "02" || check_status == "20"
    || check_status == "21" || check_status == "22" || check_status == "23"
    || check_status == "24" || check_status == "25" || check_status == "26"
    || check_status == "27" || check_status == "28" || check_status == "29"
    || check_status == "30" || check_status == "31" || check_status == "32"
    || check_status == "33" || check_status == "34" || check_status == "35"
    || check_status == "36" || check_status == "37" || check_status == "38"
    || check_status == "39" || check_status == "40" || check_status == "51"
    || check_status == "53" || check_status == "55" || check_status == "58") {
        // print OK status
        cout << "OK" << endl ; 
    }
    else {
        cout << "Error" ;
    }
}
