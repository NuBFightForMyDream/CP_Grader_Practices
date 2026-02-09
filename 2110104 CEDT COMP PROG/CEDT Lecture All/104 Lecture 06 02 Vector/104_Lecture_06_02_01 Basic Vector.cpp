# include <iostream> 
# include <vector> 
using namespace std ; 

// basic array 
// create function that count grade A
int countGradeA (char grades[] , int n ) { // n is size , array of char 
    int c = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if (grades[i] == 'A') c++ ; // add c by 1
    } return c ; 
}

int main() {
    // define vector (must be same type)
    vector <int> fibo_seq = {0,1,1,2,3,5,8,0} ; 
    fibo_seq[7] = fibo_seq[5] + fibo_seq[6] ; // create new value
    fibo_seq.push_back( fibo_seq[6] + fibo_seq[7] ) ; // append new value to latest element with v[6] + v[7]
    
    // vector in vector 
    vector <vector<int>> v1 ; // vacant vector (size = 0)
    cout << v1.size() << endl ; // 0

    // initialize value in vector
    vector <int> vec1 = {3,5,4,1} ; 
    vector <char> vec2(3 , 'Y') ; // {'Y','Y','Y'}
        // copy value from vector
    vector <char> copy_vec2(vec2) ; 

    // compare vector (like in array)
    vector<int> v_0 = {1,2,3} ;
    vector<int> v_1 = {3,2,1} ; 
    cout << (v_0 < v_1) << endl ; 

    // for loop , get average of value in vector
    vector<int> sample_vector = {9,3,4,1,3,1} ; 
    float summation = 0 ; 
    for (int i = 0 ; i < sample_vector.size() ; i++) {
        summation += sample_vector[i] ; 
    }
    cout << "Average Value : " << (summation / sample_vector.size()) << endl ; 

}