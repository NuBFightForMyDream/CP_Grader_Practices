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
    
    // Logic : scope smaller for pair ( Two Pointer : O(n) )
    long long left_bound = 0 ; 
    long long right_bound = dancer_pair - 1 ; 
    
    while (left_bound < right_bound) {
        // scope left down or scope right down 
        if (dance_difference[left_bound] + dance_difference[right_bound] > 0) { 
            // ตัวนอกสุดเข้าเงื่อนไข "perfect_couple" ตัวด้านในเข้าอยู่เเล้ว ก็รวมไปเลย เเล้วค่อยๆ scope ลง
            perfect_dance_couple += (right_bound - left_bound) ; 
            right_bound-- ; 
        }
        else {
            left_bound++ ; 
        }
    }

    cout << perfect_dance_couple ; 
}