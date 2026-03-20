# include <iostream> 
# include <cmath> 
using namespace std ; 

int main() { 
    char employee_type ; cin >> employee_type ;
    int work_age ; cin >> work_age ; 
    int salary ; cin >> salary ; 

    // define bonus 
    int base_bonus = 0 , longevity_bonus = 0 ; 

    if (employee_type == 'M') { 
        base_bonus = 1500 ; 
        if (work_age < 5) longevity_bonus = 0.06 * salary ; 
        else if (work_age >= 5 && work_age < 10) longevity_bonus = 0.08 * salary ; 
        else longevity_bonus = 0.1 * salary ; 
    }

    else if (employee_type == 'B') { 
        base_bonus = 1000 ; 
        if (work_age < 5) longevity_bonus = 0.05 * salary ; 
        else if (work_age >= 5 && work_age < 10) longevity_bonus = 0.06 * salary ; 
        else longevity_bonus = 0.07 * salary ; 
    }

    else if (employee_type == 'G') { 
        base_bonus = 500 ; 
        if (work_age < 5) longevity_bonus = 0.04 * salary ; 
        else if (work_age >= 5 && work_age < 10) longevity_bonus = 0.05 * salary ; 
        else longevity_bonus = 0.06 * salary ; 
    }

    else {
        base_bonus = 0 ; longevity_bonus = 0 ;  
    }

    cout << base_bonus + longevity_bonus << endl ; 
    
}