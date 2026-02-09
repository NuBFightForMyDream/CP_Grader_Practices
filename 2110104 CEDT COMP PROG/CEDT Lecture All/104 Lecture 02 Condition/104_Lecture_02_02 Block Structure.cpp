# include <iostream> // input-output
using namespace std ; // namespace

int main() {
    // Block structure , will do only last cmd (merged to 1 cmd)
    if (true) {
        cout << "true" << endl ; 
    }

    // not a block structure , but similar
    if (1 > 2) 
        cout << "b1" << endl ; // no block , first statement will be in if cd.
        cout << "b2" << endl ; 
    cout << "-----------------" << endl ; 
    
        // cout << b1 was in if(1>2) structure , but cout << b2 is NOT

    if (1 > 2) { // false , so not doing c1 & c2 statement
        cout << "c1" << endl ; 
        cout << "c2" << endl ; 
    }

    cout << "--------- Example 1 --------------" << endl ; 
    // Ex 2 : guess result of block structure
    bool a = false;
    if (a) 
        cout << "a1" << endl; // a=T will do 
    else
        cout << "a2" << endl; // a=T not do , a=F will do
        cout << "a3" << endl; // do both case cuz not in block
    if (a)
        cout << "b1" << endl; // a=T do , a=F not do
    else {
        cout << "b2" << endl; // do both b2&b3 if a=F
        cout << "b3" << endl;
    }
    if (a) {
        cout << "c1" << endl; // do both c1&c2 if a=T
        cout << "c2" << endl;
    } else
        cout << "c3" << endl; // do c3 if a=F
        cout << "c4" << endl; // both do c4

    // NOTE : logical operators : do NOT before AND before OR
            // short circuit = c1 && c2 ... like chain but will pause if some cd false

    





}


