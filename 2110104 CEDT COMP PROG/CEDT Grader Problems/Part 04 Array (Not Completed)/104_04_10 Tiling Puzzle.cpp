# include <iostream>
# include <string>
# include <algorithm>
# include <cmath>
using namespace std ; 

int main() {
    // get info
    int N ; cin >> N ; 
    cin.ignore() ;

    // input titling 2d array
    int tiling_arr[N][N] ; 
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            cin >> tiling_arr[i][j] ; 
        }
    }

    // get 1d array without 0 from 2d array
    int arr_1row[N*N - 1] ;
    int count = 0 ;
    int row_zero_exist ;

    for (int row = 0 ; row < N ; row++) {
        for (int col = 0 ; col < N ; col++) {
            // check if not 0
            if (tiling_arr[row][col] != 0) {
                arr_1row[count] = tiling_arr[row][col] ;
                count++ ;
            }

            // check where 0 is 
            else if (tiling_arr[row][col] == 0) {
                row_zero_exist = row ; // row starts from zero
            }
        }
    }

    // check inversion in array
    int count_inversion = 0 ; 
    for (int i = 0 ; i < (N*N - 1) ; i++) {
        for (int j = i+1 ; j < (N*N - 1) ; j++) {
            // check if left more than right
            if (arr_1row[i] > arr_1row[j]) {
                count_inversion += 1 ;
            } 
        }
    }

    // check if in 3 conditions that can be solved
    if ( ( (N % 2 != 0) & (count_inversion % 2 == 0) ) || ( (N % 2 == 0) & (count_inversion % 2 != 0) & (row_zero_exist % 2 == 0) ) || ( (N % 2 == 0) & (count_inversion % 2 == 0) & (row_zero_exist % 2 != 0) ) ) {
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }

}