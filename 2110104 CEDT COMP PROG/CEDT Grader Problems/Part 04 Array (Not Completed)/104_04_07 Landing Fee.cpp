# include <iostream>
# include <string>
# include <sstream>
using namespace std ;

int main() {
    // PART 1 : INPUT INFO & STORE TO ARRAY
    
    // 1.1 : input info (we dont know size so we declare very big size)
    int N;
    cin >> N;
    cin.ignore();  // flush the newline before getline

    string countries[1000] ;
    int landing_fee[1000] ;

    string info_country = "" ;
    int fee = 0 ;

    for (int i = 0 ; i < N ; i++) {
        cin >> info_country >> fee ; 
        countries[i] = info_country ;
        landing_fee[i] = fee ;
    }
    cin.ignore(); // <-- ADD THIS to clear leftover newline
    // like cout << endl ; 

    // 1.2 : using stringstream to split words
    string flights ; 
    getline(cin , flights); // ignore spacebar

    // 1.3 : transform string to array
    string flights_arr[1000]; // create array
        // define stringstream type ss(string)
    stringstream ss(flights) ; // split words into array 
    string each_flight ; // will use this for each loop

    // 1.4 : stringstream into array
    int count = 0 ;
    while (ss >> each_flight) { // ss each word to each_flight
        flights_arr[count] = each_flight.substr( each_flight.length() - 2 ) ; // we need only countries abbrev.name
        count++ ;
    }

    // PART 2 : calculate landing fee in loop
    int total_fee = 0 ; // use count for looping

    for (int now = 0 ; now < count - 1 ; now++) {
        if (flights_arr[now] != flights_arr[now+1]) { // NOT SAME COUNTRIES

            // for loop , finding flights in array
            for (int i = 0 ; i < N ; i++) {
                if (countries[i] == flights_arr[now+1]) {
                    total_fee += landing_fee[i] ;
                    break ; // break if found
                }
            }
        }
    }

   cout << total_fee ; 

}