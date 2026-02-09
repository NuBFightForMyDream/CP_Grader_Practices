# include <iostream>
using namespace std ; 

// Examples of array
int main() {
    // Example 1 : Input matrix 2d array 
    const int MAX_ROW = 100 ; // constants ends with upper character
    const int MAX_COL = 50 ; 
    
    // declare zero matrix first
    int matrix[MAX_ROW][MAX_COL] = {0}; 

    // input & check
    int row ; int col ; 
    cout << "Enter Row : " ; cin >> row ; 
    cout << "Enter column : " ; cin >> col ; 
    // check condition if too big
    if ( (row > MAX_ROW) || (col > MAX_COL) ) {
        cout << "Size too large naja" << endl ; 
        return 0 ; // for not doing lower code 
    }

    // no need to write else condition 
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            cin >> matrix[i][j] ; 
        }
    }

    // จุดผิดที่เจอบ่อยใน Array
    // - int matrxi[][] = {1} --> ทุกช่องไม่ได้จะเป็น 1 , จะ activate เฉพาะกรณี 0 -> 0 ทุกตัวต่อจากนี้
    // กำหนดค่า เป็นตัวเเรกของ array ไว้ ค่อนข้างเซฟ
    // 
}