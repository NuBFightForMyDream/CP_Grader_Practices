# include <iostream> 
# include <string> 
# include <cmath> 
using namespace std ; 

// define function 
int calculateTotalScore(int baseScore , int bonusScore , int totalDays) {
    if (totalDays <= 3) return baseScore + bonusScore ; 
    else return 1.5 * (baseScore + bonusScore) ; 
}

int checkOrderNumber(int totalScore) { 
    if (totalScore >= 1500) return 5 ; 
    else if (totalScore >= 1000 && totalScore < 1500) return 4 ; 
    else if (totalScore >= 500 && totalScore < 1000) return 3 ; 
    else if (totalScore >= 200 && totalScore < 500) return 2 ; 
    else if (totalScore < 200 ) return 1 ; 
}

int showStatusNumber(int totalDays , int bonusScore , int orderNumber) { 
    if (orderNumber == 5 && totalDays >= 7) return 99 ; 
    else if (orderNumber == 4 && bonusScore >= 300) return 88 ;
    else return 0 ; 
}

int main() { 
    // given input : baseScore , bonusScore , totalDays
    // calculate input : totalScore , orderNumber , statusNumber

    // 1 ; input data
    int baseScore , bonusScore , totalDays ; 
    cin >> baseScore ; cin >> bonusScore ; cin >> totalDays ; 

    int totalScore , orderNumber , statusNumber ; 

    // 2 ; call function 
    totalScore = calculateTotalScore(baseScore , bonusScore , totalDays) ; 
    orderNumber = checkOrderNumber(totalScore) ;
    statusNumber = showStatusNumber(totalDays , bonusScore , orderNumber) ;
    
    // 3 : show result
    cout << totalScore << endl ; cout << orderNumber << endl ; cout << statusNumber << endl ; 



}