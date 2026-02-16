# include <iostream> 
# include <vector> 
# include <algorithm> 
using namespace std ; 

// define functions
int find_element_in_vector_range(vector<int> &v , int e) {
    int pos = 0 ; 
    for (; pos < v.size() ; pos++) {
        if (v[pos] == e) break ;
    }
    return pos ; // if not found , return pos (which is vector size)
}

int find_element_in_vector_iterator( vector<int> &v , int e ) {
    auto itr = v.begin() ; 
    for (; itr != v.end() ; ++itr) { 
        if (*itr == e) break ; 
    }
    return (itr - v.begin()) ; // index = itr - v.begin()
}

int find_element_in_ranged_vector_range( vector<int> &v , int start , int stop , int e ) { // find before stop (stop-1)
    int pos = start ; 
    for (; pos < stop ; pos++) {
        if (v[pos] == e) break ; 
    }
    return pos ; // if not found , return stop 
}

int find_element_in_ranged_vector_iterator( vector<int> &v , int start , int stop , int e ) {
    auto it = v.begin() + start ; 
    for (; it != v.begin() + stop ; ++it) { 
        if (*it == e) break ; 
    }
    return it - v.begin() ; 
}

auto find_element_with_iterator( vector<int>::iterator beg , vector<int>::iterator end , int e ) {
    // cannot use auto , so use iterator as parameter instead 
    for( ; beg != end ; ++beg) {
        if (*beg == e) break ; 
    }
    return beg ; // if cannot find , return end 
}

// -------------------------------- Main Function -------------------------------------
int main() { 
    vector<int> numbers = {1,3,4,3,4,2,3,4,67,4,2,2} ; 
    auto beg = numbers.begin() ; 
    cout << "Found 67 at index : " << find_element_in_vector_range(numbers , 67) << endl ; 
    cout << "Found 67 at index : " << find_element_in_vector_iterator(numbers , 67) << endl ; 
        
    cout << "Found 67 at index : " << find_element_in_ranged_vector_range(numbers , 2 , 10 , 67) << endl ; 
    cout << "Found 67 at index : " << find_element_in_ranged_vector_iterator(numbers , 2 , 10 , 67) << endl ; 

    auto itr_find_num = find_element_with_iterator(beg+2 , beg+10 , 67) ;
    cout << (itr_find_num == beg + 8) << endl ; // 1 -> true , so found at beg+8

    // We can also use #include <algorithm> to use find(beg , end , element) 
}