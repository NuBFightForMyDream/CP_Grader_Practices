# include <iostream> // i-o
# include <string>
using namespace std; 

// get_max fn for Ex 3
int get_max(int a[] , int n) { // parameter : array a , int n (size of array) MUST!!!
    int max_pos = 0 ; // we dont need to define size of array
    for (int i = 0 ; i < n ; i++) {
        if (a[i] > a[max_pos]) {
            max_pos = i ; // find which pos is maximum
        }
    } // end loop
    return a[max_pos] ; // return value of pos that is max
}

// main fn
int main() {
    // Ex 1 : basic defining array
    string month[12] ; // define like this will have null value instead (not array of 0) (value will be randomed)
    string month_name[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"} ; 
    // we can index array like month[1] will get "Feb" as result
        // NOTE : negative index is error in cpp !!!

    // Ex 2 : loop with sizeof
    int b[10] ; // defining int array with null value
    for (int i = 0 ; i < sizeof(b) / sizeof(int) ; i++) {
        b[i] = i ; // integer division , so 40 byte / sizeof(int) [4 byte] = 40 / 4 = 10
    }
        // NOTE : sizeof(int) = 4 byte = size of each index , bool = 1 byte , double = 8 byte

    // Ex 3 : Array with function (called outside main fn)
    int test_max[8] = {1,5,3,8,10,51,108,99} ;
        // MUST define more parameters (size of array)
    cout << get_max(test_max , 8) << endl ;
}

