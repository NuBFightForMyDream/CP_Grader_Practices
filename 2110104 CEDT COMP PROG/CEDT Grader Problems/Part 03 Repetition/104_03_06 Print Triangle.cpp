# include <iostream>  // input-output
# include <string> // string
using namespace std ; // namespace

int main() {
    /* LOGIC from 2110101 COMP PROG (written in thai)
    Logic : print ค่า ความยาว 2h-1 สูง 2h-1 (ที่ไมมีตัวคือช่องว่าง)
    ประเด็นคือ มี 3 condition ที่ต่างกัน

    (สังเกต pattern) ==> n = จน.บรรทัด
    บรรทัดเเรก : (.) h-1 ตัว , (*) 1 ตัว , ( ) h-1 ตัว
    บรรทัดอื่นๆ : (.) h-n ตัว , (*) 1 ตัว , (.) 2(n-1)-1 ตัว , (*) 1 ตัว , ( ) h-n ตัว
    บรรทัดสุดท้าย : (*) 2h-1 ตัว
    */

    int N ; cin >> N ; // input N

    for (int i = 1 ; i < N+1 ; i++) { // NOTE : we cant multiply string directly like in python
        if (i == 1) {
            cout << string(N-1, '.') << "*" << string(N-1, ' ') << endl;
        }
        else if (i == N) {
            cout << string(2*N-1, '*') << endl;
        }
        else {
            cout << string(N-i, '.') << "*" << string(2*i-3, '.') << "*" << string(N-i, ' ') << endl;
        }
    }
}
