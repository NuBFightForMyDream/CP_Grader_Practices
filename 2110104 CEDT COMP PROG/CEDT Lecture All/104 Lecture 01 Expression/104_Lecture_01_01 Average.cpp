#include <iostream> // input-output
using namespace std; // namespace

int main() { // main fn return int (success/unsuccess)
    // define var
    double a1;
    double a2; // later , should name it properly (taught in Programming Methodology)
    double a3; 

    // sample 1 : input each number
    cout << "Enter the first value ";
    cin >> a1;
    cout << "Enter the second value ";
    cin >> a2;
    cout << "Enter the third value ";
    cin >> a3;
    // calculate & show result
    cout << "Average is " << (a1 + a2 + a3) / 3 << endl;

}