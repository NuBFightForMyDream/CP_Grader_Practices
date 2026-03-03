# include <iostream> 
# include <vector>
# include <algorithm>
# include <utility>
# include <set>
using namespace std ; 

int main() { 
    // Cannot
    set<int> s = {4,1,2,6,5} ; 
    // *s.begin() = 99 ; // cannot fix data with iterator
    
    /*
    for (auto & num : s) -> reference to real value
        num += 7 ; --> cannot update real set (but not reference maybe enable)
    */

    /* another example : set of vector<int> */
    set< vector<int> > new_set = { {1,2} , {9} };
    // (*s.begin())[0] = 99 ; // want to change 1 to 99 -> cannot (set can't change value)
    // (*s.begin()).push_back(99); // push_back isn't allowed too

}