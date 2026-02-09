# include <iostream> // input-output
# include <string> // string
using namespace std ; 

int main() {
    // define status
    bool has_upper = false , has_lower = false ;
    bool has_number = false , has_specialchar = false ; 

    string password ; 
    cin >> password ; 
    
    // check case
    for (int i = 0 ; i < password.length() ; i++) {
        if ('A' <= password[i] && password[i] <= 'Z') {
            has_upper = true ; 
        }
        else if ('a' <= password[i] && password[i] <= 'z') {
            has_lower = true ; 
        }
        else if ('0' <= password[i] && password[i] <= '9') {
            has_number = true ;
        }
        else if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '_' ||
                 password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '|' ||
                 password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '_' || password[i] == '.' ||
                 password[i] == '=' || password[i] == '+' || password[i] == '[' || password[i] == ']' || password[i] == '\'' ||
                 password[i] == '{' || password[i] == '}' || password[i] == ';' || password[i] == '<' || password[i] == '>') 
                {
                    has_specialchar = true ; 
                }
    } // ending loop

    // after loop , check condition
    if (password.length() >= 12 && has_lower == true && has_upper == true && has_number == true && has_specialchar == true) {
        cout << ">> strong" << endl ; 
    }

    else if (password.length() >= 8 && has_lower == true && has_upper == true && has_number == true) {
        cout << ">> weak" << endl ; 
    }

    else {
        cout << ">> invalid" << endl ; 
    }
}

