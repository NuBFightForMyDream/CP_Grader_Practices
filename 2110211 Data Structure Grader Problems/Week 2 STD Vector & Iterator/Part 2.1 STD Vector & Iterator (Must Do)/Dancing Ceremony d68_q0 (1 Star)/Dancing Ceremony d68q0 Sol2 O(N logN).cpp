// Data Quiz 0 2568 : Dancing Ceremony (0.5 Star)
# include <iostream> 
# include <vector> 
# include <algorithm> // for upper_bound & sort vector
using namespace std ; 

int main() {
    // input vector
    int dancer_pair ; cin >> dancer_pair ; 
    vector <int> personA ; vector <int> personB ; 

    int danceAbilityA , danceAbilityB ; 
    for (int i = 0 ; i < dancer_pair ; i++) {
        cin >> danceAbilityA ; 
        personA.push_back( danceAbilityA ) ;
    }
    for (int i = 0 ; i < dancer_pair ; i++) {
        cin >> danceAbilityB ; 
        personB.push_back( danceAbilityB ) ;
    }

    // check difference
    vector <long long> dance_difference ;  
    for (int pos = 0 ; pos < dancer_pair ; pos++) {
        dance_difference.push_back( personA[pos] - personB[pos] ) ; 
    }

    // sort difference vector
    sort( dance_difference.begin() , dance_difference.end() ) ; // sort with iterator first and end 

    // nested for loop , check perfect pair -> NOT WORK (60/100) 
    // using O(n log n) is safer : binary search or normal search
    long long perfect_dance_couple = 0 ; 
    
    for (int i = 0; i < dancer_pair; i++) {
    
        // create iterator for upper bound then calculate distance 
        auto it = upper_bound(
            dance_difference.begin() + i + 1, // เริ่มค้นหาจากตำแหน่งถัดไป
            dance_difference.end(),           // ค้นหาไปจนสุดเวกเตอร์
            -dance_difference[i]              // ค่าที่ใช้เปรียบเทียบ -> check if dance[i] > -dance[j] 
            // so find dance[j] by > -dance[i] 
        );
        
        // calculate difference to end 
        perfect_dance_couple += distance(it, dance_difference.end());
    }

    cout << perfect_dance_couple ; 
}