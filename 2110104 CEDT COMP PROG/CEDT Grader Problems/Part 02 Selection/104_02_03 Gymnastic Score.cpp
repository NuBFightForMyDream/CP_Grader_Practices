# include <iostream>
# include <cmath> // for round() fn
using namespace std ; 

int main(){
    // declare & input
    double score1 , score2 , score3 , score4 ; 
    double min_score , max_score ;

    cin >> score1 >> score2 >> score3 >> score4 ;

    // check min first
    if (score1 < score2 && score1 < score3 && score1 < score4) {
        min_score = score1 ; 
    }
    else if (score2 < score1 && score2 < score3 && score2 < score4) {
        min_score = score2 ; 
    }
    else if (score3 < score1 && score3 < score2 && score3 < score4) {
        min_score = score3 ; 
    }
    else if (score4 < score1 && score4 < score2 && score4 < score3) {
        min_score = score4 ; 
    }
    // check max next
    if (score1 > score2 && score1 > score3 && score1 > score4) {
        max_score = score1 ; 
    }
    else if (score2 > score1 && score2 > score3 && score2 > score4) {
        max_score = score2 ; 
    }
    else if (score3 > score1 && score3 > score2 && score3 > score4) {
        max_score = score3 ; 
    }
    else if (score4 > score1 && score4 > score2 && score4 > score3) {
        max_score = score4 ; 
    }

    // calculate score
    double avg_score = (score1 + score2 + score3 + score4 - max_score - min_score) / 2.0 ;
    cout << round(avg_score * 100.0) / 100.0 << endl ; // show result
}
