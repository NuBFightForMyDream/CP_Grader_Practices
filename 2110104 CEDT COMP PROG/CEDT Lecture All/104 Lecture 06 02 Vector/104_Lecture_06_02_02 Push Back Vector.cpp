# include <iostream>
# include <vector>
# include <utility> // pair
# include <array>
# include <tuple> 

using namespace std ; 

int main() {
    // Push back with fibonacci sequence 
    vector <long long> fibo_seq = {0,1} ; 
    for (int i = 2 ; i < 100 ; i++) {
        fibo_seq.push_back( fibo_seq[i-1] + fibo_seq[i-2] ) ; 
    }
    for (int i = 0 ; i < 100 ; i++) {
        cout << fibo_seq[i] << " " ; 
    }
    cout << endl ; 

    // Upgrade function with array VS vector (comparison)
        // watch in Tuple-Pair Lecture 
        // array have to prepare size , but vector don;t have to
    vector< pair<string , string> > student_grades ; // vector of pair
    string stu_id , grade ;
    cout << "Enter Student ID and Grade : " << endl ; 
    while (cin >> stu_id) { // input stu_id until end
        // input grade
        cin >> grade ; 
        // make pair then push back 
        student_grades.push_back( make_pair(stu_id , grade) ) ;  
    }
    /*
    2 
    6730084521 D+ 
    6830014721 C+ (macOS need to ctrl + D)
    */ 

    // Note : vector can be indexed like in array -> v[i] 
}