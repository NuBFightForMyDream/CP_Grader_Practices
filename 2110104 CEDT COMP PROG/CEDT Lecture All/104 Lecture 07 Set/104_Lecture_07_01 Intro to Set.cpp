# include <iostream> 
# include <set> 
using namespace std ; 

int main() { 
    // Set 
        // No index
        // Fast in search , add , delete data
        // Sorted automatically
        // get element by iterator
        // cannot change valyue (must delete then add new)

    // define set 
    set<int> s = {3,1,2,6,7} ; 
    s.insert(5) ; // add 5 to set -> {1,2,3,5,6,7}
    s.erase(2) ; // {1,3,5,6,7}

    for (auto num : s) cout << num << " " ; cout << endl ; // auto is integer

    // complicated set 
    set< vector<int> > s4 = { {1,2,3} , {0,4} } ;
    auto s5 = set<int>() ; // auto = set of integer -> .size() = 0 
    // copy data from set 
    set<int> s_copy(s5) ; // s_copy = set<int>

}