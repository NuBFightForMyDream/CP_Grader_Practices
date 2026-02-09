# include <iostream> // competitive programming library
# include <string>
using namespace std; // namespace

int main() { // main fn
    // define 2 array
    string nickname[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"} ;
    string name[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah"} ;

    // loop in name , out nickname
    const int arraySize = 10 ;
    int N ; cin >> N ; 

    for (int i = 0 ; i < N ; i++) {
        string name_in ; cin >> name_in ; 
        bool found = false ; 

        for (int j = 0 ; j < arraySize ; j++) {
            if (name_in == name[j]) {
                cout << nickname[j] << endl ;
                found = true ; 
            }

            if (name_in == nickname[j]) {
                cout << name[j] << endl ; 
                found = true ;
            }
        }

        if (found == false) {
            cout << "Not found" << endl ; 
        }
    }
}