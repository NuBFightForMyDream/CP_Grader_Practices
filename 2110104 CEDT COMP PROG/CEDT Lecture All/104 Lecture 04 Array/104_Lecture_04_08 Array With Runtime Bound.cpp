# include <iostream>
# include <string>
using namespace std ; 

// define test1 function
void test1(int a[] , int n) {
    cout << a[n-1] << endl ; // print last element
}

int main() {
    // define size from user (ONLY ALLOW IN 1D ARRAY)
    int n ; 
    cout << "Enter Length : " ; cin >> n ; 
    int v[n] ; // array v with size n -> array of 0 
    cout << "Size = " << sizeof(v) << endl ; 
    // call function for test1
    test1(v , 10) ; 

    // ---------- Anither Part : Define 2D array size from user -----------
    int row ; 
    int col ; 
    cout << "Enter Row : " ; cin >> row ; 
    cout << "Enter Column : " ; cin >> col ; 
        // define matrix
    int myMatrix[row][col] ; 
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            // replace value
            myMatrix[i][j] = -1 ; 
        }
    }

    // print matrix
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            cout << myMatrix[i][j] << " " ; 
        }
        cout << endl ; 
    }
    cout << endl ; 

}