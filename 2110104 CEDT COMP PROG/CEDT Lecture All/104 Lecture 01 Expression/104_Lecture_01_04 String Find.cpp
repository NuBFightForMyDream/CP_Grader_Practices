#include <iostream> // input-output
#include <string> // string
using namespace std; // namespace

int main() {
    string s = "This box has a book";
    // using .find() method by (str_find , pos_start_find)
    cout << s.find("has") << endl;
    cout << s.find("bo") << endl;
    cout << s.find("bo", s.find("bo")+1) << endl;
    cout << "---" << endl;
    
    cout << s.find("car") << endl; // cant find , return npos (random number)
    if (s.find("car") == string::npos) { // npos = npos
        cout << "Not found" << endl;  // return "Not found"
    }
}   