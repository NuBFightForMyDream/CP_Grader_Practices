# include <iostream>
# include <string>
# include <array>
using namespace std ; 

// define two functions for test1 , test 2 of array size

// test1 function 
void test1( int a[3] ) {
    cout << "test 1 size : " << sizeof(a) << endl ;
    for (int i = 0 ; i < 5 ; i++) { // for loop 5 times (more than array size = null value)
        cout << a[i] << " ";
    }
    cout << endl ; 
}

void test2( int a[100] ) {
    cout << "test 2 size : " << sizeof(a) << endl ; 
    for (int i = 0 ; i < 5 ; i++) {
        cout << a[i] << " " ; 
    }
    cout << endl ;
}

// main function
int main() {
    // define null array
    int a[3] ; 
    int b[7] ; 
    for (int i = 0 ; i < 3 ; i++) {
        a[i] = i ; 
    }
    for (int i = 0 ; i < 7 ; i++) {
        b[i] = i * 10 ; 
    }
    // test function
    test1(a) ; test2(a) ; 
    test1(b) ; test2(b);

    // summary 
    // - size from parameter doesn't affect
    // - size = 8 => pointer size for integer array
    // - size > loop : null value 

}