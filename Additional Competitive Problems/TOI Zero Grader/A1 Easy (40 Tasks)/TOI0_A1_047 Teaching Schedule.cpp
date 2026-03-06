# include <iostream>
# include <string> 
using namespace std ; 

int main() { 
    int load_per_week , min_per_period ; 
    cin >> load_per_week >> min_per_period ; 

    int total_min = load_per_week * min_per_period ; 
    
    int h , m ;
    h = total_min / 60 ;
    m = total_min % 60 ; 

    if (h == 0 && m == 0) cout << "No teaching" ; 
    else if (h == 0 && m != 0) cout << m << " minutes" ; 
    else if (h != 0 && m == 0) cout << h << " hours" ; 
    else cout << h << " hours " << m << " minutes" ; 
}