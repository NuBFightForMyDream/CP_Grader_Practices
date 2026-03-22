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
    sort(goat_positions.begin() , goat_positions.end());

    // step 2 : input wolf data and check for lower bound
    int count_wolf ; cin >> count_wolf ; 
    for (int j = 0 ; j < count_wolf ; j++) { 
        int wolf_position ; cin >> wolf_position ; 
        
        // consider 3 cases from lower bound of wolf_itr
        auto nearest_itr = lower_bound(goat_positions.begin() , goat_positions.end() , wolf_position) ; 

        // case 1 : wolf is at lefthand of goats , must move forward only 
        if (nearest_itr == goat_positions.begin()) {
            // using lower bound will return first element of goats
            cout << abs(wolf_position - *nearest_itr) << endl ; // *nearest = value of first = begin 
        }

        // case 2 : wolf is at righthand of goats , must move backward only 
        else if (nearest_itr == goat_positions.end()) { 
            // move back 1 iterator of lower bound (backward end 1 step = last element)
            cout << abs(wolf_position - *(nearest_itr - 1)) << endl ; 
        }

        // case 3 : wolf_position is between previous & current position , must check absolute distance of goat and wolf
        else {
            int current_position = *nearest_itr ;
            int previous_position = *(nearest_itr - 1) ; // backward 1 step 

            // check which one is nearer 
            if (abs(current_position - wolf_position) >= abs(previous_position - wolf_position) ) { 
                int distance_to_eat = abs(wolf_position - previous_position) ; 
                cout << distance_to_eat << endl ;
            }
            else { 
                int distance_to_eat = abs(wolf_position - current_position) ; 
                cout << distance_to_eat << endl ;
            }
        }
    }
}