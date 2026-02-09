# include <iostream>
# include <string> 
using namespace std ; 

// กำหนดค่าเริ่มต้นหลายๆมิติ

// define void function
void print2d( int matrix[][3] , int row , int col) { // 3 column 
    // print each character
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            cout << matrix[i][j] << " " ; 
        }
        cout << endl ; 
    }
    cout << endl ; 
}

// main fn
int main() {
    // define 2d array 
    int a[2][3] = { {1,2,3} , {4,5,6} } ; // 2*3 matrix 
    int b[][2] = { {1,2} , {4,5} , {7,9} } ; // x*2 matrix
    int c[][3] = {
                    {1,2,3} , 
                    {4,5,6} , 
                    {7,8,9} , 
                    {10,11,12}
                } ;
    
    // call function for print matrix
    print2d(a , 2 , 3) ; // 2 row 3 col
    // print2d(b , 2 , 6) ; // error cuz we input different size for matrix function
    print2d(c , 4 , 3) ; // 4 row 3 col    
    
    // define 3d array -> 1 more bracket on 2d array
    int p[3][2][3] = {
        { {0,0,0} , {9,9,9} } , 
        { {1,2,3} , {1,2,3} } , 
        { {4,5,6} , {6,4,5} } ,
    } ; 
}