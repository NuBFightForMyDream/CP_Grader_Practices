# include <iostream>
# include <string>
using namespace std ;

int main() {
    // define row & col
    int row , col ; 
    cin >> row >> col ; 

    // create 2 arrays (a = old , b = new) & store info to array a
    double a[row][col] , b[row-2][col-2] ; 
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            cin >> a[i][j] ; 
        }
    }

    // calculate info in array a to array b
    for (int i = 1 ; i < row - 1 ; i++) {
        for (int j = 1; j < col - 1 ; j++) {
            // calculate average 9 numbers
            double average = ( a[i-1][j-1] + a[i][j-1] + a[i+1][j-1] +
                            a[i-1][j] + a[i][j] + a[i+1][j] + 
                            a[i-1][j+1] + a[i][j+1] + a[i+1][j+1] ) / 9.0 ;

            // store info to array b
            average = round(average*100) / 100.0 ; // round 2 decimal pts
            b[i-1][j-1] = average ; 
        }
    }
    
    // print out 2D array
    for (int i = 0 ; i < row-2 ; i++) {
        for (int j = 0 ; j < col-2 ; j++) {
            cout << b[i][j] << " " ; 
        }
        cout << endl ; 
    }
}