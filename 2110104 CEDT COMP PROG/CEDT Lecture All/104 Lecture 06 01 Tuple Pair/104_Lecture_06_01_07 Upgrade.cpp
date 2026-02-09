# include <iostream>
# include <utility> 
using namespace std ; 
    
// create array of grade letter
string grade_letter[] = {"F","D","D+","C","C+","B","B+","A","A"} ; // repeat A in case getting A already

// create upgrade function (return string of new grade)
string upgrade_student (string grade) {
    // for loop , check grade then upgrade
    for (int i = 0 ; i < 8 ; i++) {
        if (grade == grade_letter[i]) {
            return grade_letter[i+1] ; // next grade
        }
    }
    return grade; // fix: return original grade if not found
}

int main() {
    // input student grades into array of pair
    int N ; cin >> N ; 
    pair <string , string> student_grades[N] ; // array of pair

    // input info
    string stu_id , grade ; 
    for (int i = 0 ; i < N ; i++) {
        cin >> stu_id >> grade ; 
        // make pair then store
        student_grades[i] = make_pair(stu_id , grade) ; 
    }

    // input info then upgrade each student
    while (cin >> stu_id) { // while not last info , upgrade

        // for loop find student id , if found then upgrade
        for (int i = 0 ; i < N ; i++) {
            if (student_grades[i].first == stu_id) { // chek first element
                student_grades[i].second = upgrade_student(student_grades[i].second) ; // upgrade grade then store 
                break ; // break if found stu_id
            }
        }
    }

    // output
    for (int i = 0 ; i < N ; i++) {
        cout << student_grades[i].first << " " << student_grades[i].second << endl ; 
    }
}

// testcases
/*
3
6730084421 B
6730084521 F
6730084621 C+
6730084421 6730084521 6730084621
*/

// in macOS , need to use ctrl+d to end program.