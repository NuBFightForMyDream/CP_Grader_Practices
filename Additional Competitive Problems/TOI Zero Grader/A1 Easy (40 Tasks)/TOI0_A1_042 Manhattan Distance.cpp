# include <iostream> 
# include <vector> 
# include <string> 
# include <cmath>
using namespace std ; 

int main() { 
    string command ; cin >> command ; 
    int pos_x = 0 , pos_y = 0 ; 

    for (char each_cmd : command) { 
        if (each_cmd == 'N') pos_y++ ; 
        else if (each_cmd == 'S') pos_y--;
        else if (each_cmd == 'E') pos_x++;
        else if (each_cmd == 'W') pos_x--;
    }

    int manhattan_dist = abs(pos_x- 0) + abs(pos_y - 0) ; 
    cout << pos_x << " " << pos_y << " " << manhattan_dist << endl ; 
}