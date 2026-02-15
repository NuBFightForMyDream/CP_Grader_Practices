# include <iostream>
# include <vector> 
# include <utility> // pair
# include <tuple>
# include <string>
using namespace std ; 

int main() { 
    // Part I : Iterator arithmetic
    vector <int> my_number = {2,4,6,0,1,9,7} ; 

    auto itr = my_number.begin() ; // *itr = 2 
    itr++ ; // *itr = 4
    itr += 4 ; // *itr = 9
    int k = itr - my_number.begin() ; // l = pos from start 
    int sz = my_number.end() - my_number.begin() ; // equal size of vector
    // int pos_want = my_number.begin() + itr (cuz iter + iter = BOOM!!)

    // Part 2 : for loop iterator
    string my_curriculum = "CEDT CHULA" ; 
    for (char e : my_curriculum) {
        if (e == 'E') e = 'P' ; // string wont be change (change only in iterator)
    }

    // Part 3 : using "reference" iterator for referring to real address
    vector <int> my_even = {2,4,6,8,10,12} ; 
    for (auto & each_num : my_even) {
        if (each_num % 2 == 0) each_num /= 2 ; // each num will be change from "reference"
    }
    for (auto num : my_even) cout << num << " " << endl ; 

    // end // 

}