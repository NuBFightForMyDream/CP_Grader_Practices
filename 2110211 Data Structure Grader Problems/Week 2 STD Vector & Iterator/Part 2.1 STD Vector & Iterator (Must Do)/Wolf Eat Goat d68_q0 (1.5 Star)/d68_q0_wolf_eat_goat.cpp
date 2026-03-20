# include <iostream> 
# include <vector> 
# include <algorithm> // for sort and lower/upper bound 
using namespace std ; 

int main() { 
    // step 1 : input goat data
    int count_goat ; cin >> count_goat ; 
    vector<int> goat_positions ; 
    for (int i = 0 ; i < count_goat ; i++) { 
        int goat ; cin >> goat ; 
        goat_positions.push_back(goat) ; 
    }

    // sort data first (for using lower bound) 

    // step 2 : input wolf data and check for lower bound
    int count_wolf ; cin >> count_wolf ; 
    for (int j = 0 ; j < count_wolf ; j++) { 
        int wolf_position ; cin >> wolf_position ; 
        // use lower bound algorithm (lower bound for including current pos)
        int  = *lower_bound(goat_positions.begin() , goat_positions.end() ; wolf_position);  
    }
}