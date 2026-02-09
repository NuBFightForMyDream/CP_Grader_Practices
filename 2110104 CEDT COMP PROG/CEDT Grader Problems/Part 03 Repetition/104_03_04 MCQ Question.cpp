# include <iostream> // input/output
# include <string> // string
using namespace std ; // namespace

int main() {
    // check input (using ignore & getline)
    string my_ans , solution ; // define first

    // using getline to get all infos in line (no need to use ignore)
    getline(cin , my_ans);  
    getline(cin , solution);

    // check loop (check if same length first)
    if (my_ans.length() != solution.length()) {
        cout << "Incomplete answer" << endl ; 
    }

    else { 
        // declare count_correct
        int count_correct = 0 ; 

        // check by indexing
        for (int i = 0 ; i < my_ans.length() ; i++) {
            if (my_ans[i] == solution[i]) {
                count_correct += 1 ; 
            }
        }

        // after loop , show out count
        cout << count_correct << endl ;
    }
}