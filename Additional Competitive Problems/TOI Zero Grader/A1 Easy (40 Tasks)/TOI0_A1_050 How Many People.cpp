# include <iostream>
# include <cmath> 
using namespace std ; 

int main() { 
    int male_visitor = 0 , female_visitor = 0 ; 
    
    int keycard_data ; 
     
    while (cin >> keycard_data && keycard_data >= 0) { 
        if (keycard_data % 2 == 0) female_visitor++ ; 
        else male_visitor++ ; 
    }

    cout << male_visitor << " " << female_visitor << " " << male_visitor + female_visitor << endl ; 
}