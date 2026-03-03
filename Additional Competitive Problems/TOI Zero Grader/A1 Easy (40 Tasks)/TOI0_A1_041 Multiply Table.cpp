# include <iostream>
# include <algorithm>
# include <vector>
using namespace std ; 

int main() { 
    int num ; cin >> num ; 
    for (int mul = 1 ; mul < 13 ; mul++) { 
        cout << num << " * " << mul << " = " << num * mul << endl ; 
    }
}