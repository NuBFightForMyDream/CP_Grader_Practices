# include <iostream> // i/o
# include <cmath>
# include <string>
using namespace std ; // namespace std

int main() {
    // declare & input
    string stu_id1 , stu_id2 ;
    double gpax1 , gpax2 ;
    char compprog_p1 , compprog_p2 , cal1_p1 , cal1_p2 , cal2_p1 , cal2_p2 ; 

    cin >> stu_id1 >> gpax1 >> compprog_p1 >> cal1_p1 >> cal2_p1 ; 
    cin >> stu_id2 >> gpax2 >> compprog_p2 >> cal1_p2 >> cal2_p2 ;

    // check minimum requirement
    bool minreqcp_p1 = (compprog_p1 == 'A' && cal1_p1 <= 'C' && cal2_p1 <= 'C') ;
    bool minreqcp_p2 = (compprog_p2 == 'A' && cal1_p2 <= 'C' && cal2_p2 <= 'C') ;

    if (minreqcp_p1 == true && minreqcp_p2 == true) {
        // check higher gpax
        if (gpax1 > gpax2) {
            cout << stu_id1 << endl ; 
        }
        else if (gpax1 < gpax2) {
            cout << stu_id2 << endl ; 
        }
        else { // gpax1 == gpax2
            // check cal1 (be aware of string comparison)
            if (cal1_p1 < cal1_p2) { // p1 > p2 -> out p1
                cout << stu_id1 << endl ; 
            }
            else if (cal1_p1 > cal1_p2) { // p1 < p2 -> out p2
                cout << stu_id2 << endl ;
            }
            else { // cal1_p1 == cal1_p2
                // check cal2 (be aware of string comparison)
                if (cal2_p1 > cal2_p2) { // p2 > p1 -> out p2
                    cout << stu_id2 << endl ; 
                }
                else if (cal2_p1 < cal2_p2) { // p2 < p1 -> out p1
                    cout << stu_id1 << endl ; 
                }
                else {
                    cout << "Both" << endl ; 
                }
            }
        }
    } // pass minimum requirements of CP

    // someone pass
    else if (minreqcp_p1 == true && minreqcp_p2 == false) {
        cout << stu_id1 << endl ; 
    }
    else if (minreqcp_p1 == false && minreqcp_p2 == true) {
        cout << stu_id2 << endl ; 
    }
    // no one pass
    else {
        cout << "None" << endl ; 
    }
}