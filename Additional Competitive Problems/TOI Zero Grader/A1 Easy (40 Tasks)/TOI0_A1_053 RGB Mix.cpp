# include <iostream> 
# include <cmath> 
using namespace std ; 

int main() {
    int red1 , green1 , blue1 ; 
    int red2 , green2 , blue2 ; 

    cin >> red1 >> green1 >> blue1 >> red2 >> green2 >> blue2 ; 

    // divide color then return average RGB Value 
    int red_avg = (red1 + red2) / 2 ; 
    int green_avg = (green1 + green2) / 2 ; 
    int blue_avg = (blue1 + blue2) / 2 ; 

    cout << red_avg << " " << green_avg << " " << blue_avg << endl ; 
}