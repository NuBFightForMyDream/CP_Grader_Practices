# include <iostream>
# include <vector> 
# include <algorithm> 
# include <map>
using namespace std;

long long find_birthgiver(long long check_id , map<long long , long long> & dad_son) { // pass reference for not copying
    if (dad_son.find(check_id) == dad_son.end()) return -1 ;
    else return dad_son[check_id] ; 
}

long long find_grandparent(long long check_id , map<long long , long long> & dad_son) { 
    // case 1 : parent not exist , grandparent will be not existed too (logic)
    if (find_birthgiver(check_id , dad_son) == -1) return -1 ; 
    
    else { 
        long long parent_id = find_birthgiver(check_id , dad_son) ; 
        // case 2 : parent exist , but grandparent didn't exist 
        if (dad_son.find(parent_id) == dad_son.end()) return -1 ; 
        else return dad_son[parent_id] ; 
    }
}

int main() {
    // use this for faster cin
    ios_base::sync_with_stdio(false); cin.tie(0);
    
	// input data 
	long long count_relative ; long long count_check_relative ; 
	cin >> count_relative >> count_check_relative ; 
	
	map<long long , long long> offspring_to_birthgiver ;
	
	for (int i = 0 ; i < count_relative ; i++) {
	    long long birthgiver_id , offspring_id ; 
	    cin >> birthgiver_id >> offspring_id ;
	    
	    // add to map (check if not same person first)
	    if (birthgiver_id != offspring_id) offspring_to_birthgiver[ offspring_id ] = birthgiver_id ;
	}
	
    // check if same grandparent 
    for (int j = 0 ; j < count_check_relative ; j++) {
        long long check_id1 , check_id2 ; 
        cin >> check_id1 >> check_id2 ; 
        
        // get grandparent id by calling function
        long long grandparent_id_1 = find_grandparent(check_id1 , offspring_to_birthgiver) ; 
        long long grandparent_id_2 = find_grandparent(check_id2 , offspring_to_birthgiver) ;  
        
        // case 0 : check if checker is not herself/himself
        if (check_id1 == check_id2) cout << "NO" << endl ; 
        
        // case 1 : someone not exist since beginning , return NO
        else if (grandparent_id_1 == -1 || grandparent_id_2 == -1) cout << "NO" << endl ; 
        
        // case 2 : general case (not same grandparent and same) 
        else if (grandparent_id_1 != grandparent_id_2) cout << "NO" << endl ; 
        
        else cout << "YES" << endl ; 
    }
    
    
}
