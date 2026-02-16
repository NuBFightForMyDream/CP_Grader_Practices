# include <iostream>
# include <vector> 
# include <utility> // pair
# include <tuple>
# include <string>
using namespace std ; 

// define function : erase_all_element_containing_e
void erase_all_element_containing_e( vector<int> &v , int e_to_del ) {
    // reference v to original vector to erase element 
    auto itr = v.begin() ; 
    while (itr != v.end()) {
        if (*itr == e_to_del) { 
            itr = v.erase(itr) ; // erase element and itr move to next of deleted element
        }
        else (++itr) ; 
    }
}
int main() { 
    // Vector operations : erase(itr) & insert(itr , element)
    vector<int> my_vec = {12,34,56,67,78,89} ; 
    auto itr = my_vec.begin() ; // itr start at pos 0

    my_vec.erase( itr + 2 ) ; // erase 56 out -> {12,34,67,78,89}
    my_vec.insert( itr + 4 , 99) ; // insert 99 before pos itr+4 (89) {12,34,67,78,99,89}

    for (auto num : my_vec) cout << num << " " ;

    // erase with step 2 (tua wen tua)
    vector<int> my_number = {1,2,3,4,5,6,7,8} ; 
    auto itr_num = my_number.begin() ; 
    while ( itr_num != my_number.end() ) { 
        itr_num = my_number.erase(itr_num) ; 
        // return iterator "after" deleted element
            // Ex : erase 1 , return itr at 2 

        // next step : check if end loop
        if (itr_num == my_number.end()) break ; 
        // move iterator
        ++itr_num ; 
    }
    for (auto num : my_number) cout << num << " " ; // 2 4 6 8


    // Erase all element we want which is found in vector
    vector<int> u = {1,1,2,3,4,6,6,7,7} ; 
    erase_all_element_containing_e(u , 6) ; 
    for (auto n : u) cout << n << " " ; 

    // Insert front 
    vector<int> p ; 
    auto it = p.begin() ; 
    for (auto n : {4,3,1,2}) 
        it = p.insert(it , n) ;
        // return iterator for new value inserted -> 2 1 3 4
        
    // Note : vector behavior
    // 1 : erasing won't change iterator
    vector<int> num = {12,34,56,78};
    auto start = num.begin() ; // pointed at 12 -> 34 (first ele)
    auto i = num.erase(start) ; // 12 deleted -> i pointed at 34 (first ele)
    auto j = num.erase(start+2) ; // 78 deleted -> j pointed at end (next to last element)

    // 2 : insert / push back can change iterator
    vector<int> num_2 = {98,76,54,32,10} ; 
    auto start2 = num_2.begin() ; 
    auto i2 = num_2.insert( start2 + 1 , 108 ) ; // insert 108 before 76 -> i2 point at 76 (next to 108)

}