# include <iostream>
# include <cmath> 
using namespace std ;

// define function 
float get_mean_of_three(float x1 , float x2 , float x3) {
    return (x1 + x2 + x3) / 3 ; // returned-value function
}

int to_second(int hour , int minute , int second) {
    return 3600 * hour + 60 * minute + second ; 
}

void f1(int a) {
    int b = 3;
    cout << "In f1, a b: " << a << " " << b << endl; // a inside will be 7 (only for inside fn)
}

int main() {
    // call function
    cout << get_mean_of_three(3 , 4.5 , 6) << endl ; 

    // call to_second function
    int h1 , m1 , s1 ;

    cout << "Enter Hour Minute Second : " ; cin >> h1 >> m1 >> s1 ; 

    cout << "Total Seconds : " << to_second(h1 , m1 , s1) << endl ; 

    // check value of f1
    int b = 4; // not equal to b = 3 in f1 function (which will never called outside fn)
    f1(7); // call f1(7) will return b = 4 (same)
    cout << "After f1, b: " << b << endl; // a won't have value [not 7 from f1(7)] bcz a was never declared
}


