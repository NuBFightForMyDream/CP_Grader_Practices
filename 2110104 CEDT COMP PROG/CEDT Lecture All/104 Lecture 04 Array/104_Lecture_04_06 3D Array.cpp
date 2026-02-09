# include <iostream>
# include <string>
using namespace std ;

int test3d(int a[][5][10] ,int n1, int n2, int n3) { // define parameter (must declare dimension)
    // ชั้นนอกสุด no need to call (ตัวเเรก)
    // มองเสมือน [layer][row][col]
    int sum = 0;
    for (int i = 0 ; i < n1 ; i++)
        for (int j = 0 ; j < n2 ; j++)
            for (int k = 0 ; k < n3 ; k++)
                sum += a[i][j][k];
    return sum;
}

int main() {
    // define 3D array (must call all size except outest)
    int p[4][5][10];
    int q[100][5][10];
    int r[4][99][10];
    int s[4][5][99];
    int t[1][3][4] ; // no need to call outest
    cout << test3d(p,4,5,10) << endl;
    cout << test3d(q,100,5,10) << endl ;
    //cout << test3d(r,4,99,10); // ERROR
    //cout << test3d(s,4,5,99); // ERROR

    // ERROR BECAUSE R & S ARRAY DIDNT HAVE DIMENSION [][5][10] -> from parameters
}

