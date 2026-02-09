# include <iostream>
using namespace std ; 

// define print function
void print_array( int array[] , int size ) {
    for (int i = 0 ; i < size ; i++) {
        cout << array[i] << " " ; 
    }
    cout << endl ; 
}
int main() {
    // define some array
    int z[6] ; // vacant array -> null value
    int a[3] = {1,2,3} ;
    int b[5] = {1,2} ; // size > defined (ตามหลังเป็น 0 หมด)
    int c[] = {11,22,33,44} ; // no need to define size for 1d array

    // call functions
    print_array(z,6);
    print_array(a,3);
    print_array(b,5);
    print_array(c, sizeof(c) / sizeof(int) ); // can print with size na weii
}