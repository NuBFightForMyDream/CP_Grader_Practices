# include <iostream> // input-output
# include <iomanip> // for setprecision & fixed
# include <cmath> // math
using namespace std ; 

int main() {
    // Ex 1 : trnasform int -> bool
    int a = 20 ; 
    bool b = -1 ;
    double d = 0.0001 ; 
    char c = 'A' ; 

    if (a) { // recommended uisng a != 0 instead 
             // cuz 0 is false (other number seen as true)
        cout << "This is true" << endl ; 
    }
    // negative int can be converted to 1 (true) too

    // Ex 2 : double comparison
    double r = 987654.23456789;
    double s = 0.1234567;
    double t = 345789123;

    double r1 = r / s / t; // same as r / (s * t)
    double r2 = r / t / s;

    if (r1 == r2) {
        cout << "r1 = r2 : YES" << endl;
    } else {
        cout << "r1 = r2 : NO" << endl;
    }

    cout << setprecision(20); // print out 20 decimal pts
    cout << r1 << endl << r2 << endl; 

    // check if floating-point absolute if two nb. are real enough !!!
    if (fabs(r1 - r2) < 1e-9) { // compare double and double
        cout << "r1,r2 near enough : YES" << endl;
    }

    // Ex 3 : modulo 
    cout << 5 % 3 << endl; // 2
    cout << -5 % 3 << endl; // -2
    cout << 5 % -3 << endl; // integer divide -3 then * -3 back 
    cout << -5 % -3 << endl; // not like in python , ...

    // Ex 4 : swap position
    double radius = 30;
    double v1 = 4 / 3 * M_PI * radius * radius * radius ;
    double v2 = radius * radius * radius * 4 / 3 * M_PI;

    cout << "Volume : 4/3 * pi r^3 : " << v1 << endl;
        // becuase 4/3 is integer division , so value is different
    cout << "Volume : r^3 * 4/3 * pi :  : " << v2 << endl; 

    // Ex 5 : changing data types
    cout << (int)97 << " " << char(105) << " " << (int)3.15 << endl ; 
    // Ex : (char)"asd" , (string)23 can't change data type

    // Ex 6 : other data types
    long long x = -9223372036854775808; // long long int can store to 2^63
    // unsigned ... type only stores positive 
        // Ex : long long int stores -2^63 to 2^63-1
        // but unsigned long long int storess 0 to 2^64

}