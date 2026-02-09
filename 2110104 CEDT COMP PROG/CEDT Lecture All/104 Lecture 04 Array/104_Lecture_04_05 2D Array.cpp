# include <iostream>
# include <string>
# include <array>
using namespace std ; 

// create print2d function
void print2d( int a[][2] , int row , int col) { // COLUMN SHOULD SAME as defined array !!!
    // we do row before col (we must define size of col)
    // ต้องระบุ size ในสุด ของ array (ตัวสุดท้าย) เสมอ
    for (int m = 0 ; m < row ; m++) {
        for (int n = 0 ; n < col ; n++) {
            cout << a[m][n] << " " ;
        }
        cout << endl ; // new line after end row
    }
}

// define print1dmatrix function
void print1d_matrix( int matrix[] , int size ) { // can't use parameter with only matrix
    for (int i = 0 ; i < size ; i++) {
        cout << matrix[i] << " " ; 
    }
}
int main() {
    // defining 1D array
    int A[6] ; // array of int (null)
    int B[5] = {1,2,3} ; // index 3 and 4 has value of 0 instead (starting value if not defined)
    int C[] = {11,12,13} ; // we dont need to define size of array 1D (JUST ONLY ON INNEST ARRAY)

    // print element in matrix 
    cout << "A Matrix : " ;
    print1d_matrix(A , 6 ) ;
    cout << endl;
    
    cout << "B Matrix : " ;
    print1d_matrix(B , 5 ) ;
    cout << endl;
    
    cout << "C : Matrix : " ;
    print1d_matrix(C , 3) ;
    cout << endl;

    // define 2d array
    int a[5][3] ; // 5 is outer , 3 is inner (can't change inner)

    
    // TEST 2D array
    int D[][2] = { {4,3} , {5,3} , {7,8} } ; // MUST DEFINE SIZE for innest (last)
    print2d(D , 3 , 2);

    cout << "--------------------------------" << endl ; 

    // what if want to print anonther dimension (2x3 -> 2x6 print)
    print2d(D,3,6) ; // another value will be null (randomed value)
}