# include <iostream>
# include <vector> 
# include <string> 
#include <algorithm> // for sorting elements in array
using namespace std ; 

// define insort function : Idea = insert element in sorted vector 

void insort_normal( vector<int> &v , int e ) { 
    // Idea : Sequantial Search (search each element) 

    // reference to original vector (can be changed by reference &)
    auto itr = v.begin() ; 
    for (auto end = v.end() ; itr != end ; ++itr) { 
        if (*itr >= e) {
            // check if iterator found number we want then break for inserting number
            break ; 
            // itr still move right if number less than targeted number
        }
    }
    // insert number if found (outside loop) 
    v.insert(itr , e) ; 
}

void insort_faster( vector<int> &v , int e ) { 
    // Idea : Binary Search (cut off half for each round)

    // define variables
    int mid , left = 0 , right = v.size() ; // right = end + 1 

    while (left < right) { 
        mid = (left + right - 1) / 2 ; // floor down values for #odd arrays : Ex @1->@7 , mid = @3 (consider @1 to @6)
        
        // consider 3 cases 
        
        // case 1 : element < mid -> move right bound lefthand
        if (e < v[mid]) right = mid ; 
        
        // case 2 : element > mid -> move left bound righthand 
        else if (e > v[mid]) left = mid + 1 ; 
        
        // case 3 : equal -> condition of break (all equal)
        else left = right = mid ; 
    }

    // insert after finish while loop
    v.insert(v.begin() + left , e) ; // add at pos begin + pos_got
}

// --------------------------- Main Function -----------------------------------
int main() { 
    // define array 
    vector<int> my_vector_1 = {23,45,11,-213,902,-452,44,98,102,333,-432} ; 
    sort( my_vector_1.begin(), my_vector_1.end() ) ; 

    vector<int> my_vector_2 = {23,45,11,-213,902,-452,44,98,102,333,-432} ; 
    sort( my_vector_2.begin(), my_vector_2.end() ) ; 

    // call function 
    insort_normal(my_vector_1 , 108) ; 
    insort_faster(my_vector_2 , 108) ; 

    // print out solution 
    for (auto num : my_vector_1) cout << num << " " ; cout << endl ; // O(n)
    for (auto num : my_vector_2) cout << num << " " ; cout << endl ; // O(log n)

}
