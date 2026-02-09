# include <iomanip> // for more precision
# include <iostream>
# include <cmath>
using namespace std ; 

int main() {
    // define value & input
    double weight , height ; 
    double mosteller , haycock , boyd ; 

    // input weight &b height
    cin >> weight >> height ;

    // calculate value for each type
    mosteller = sqrt(weight * height) / 60 ;
    haycock = 0.024265 * pow(weight , 0.5378) * pow(height , 0.3964) ;
    boyd = 0.0333 * pow(weight , 0.6157 - 0.0188 * log10(weight) ) * pow(height , 0.3);

    // show output
    cout << setprecision(15) << mosteller << endl; 
    cout << setprecision(15) << haycock << endl ; 
    cout << setprecision(15) << boyd << endl ; 
    
}