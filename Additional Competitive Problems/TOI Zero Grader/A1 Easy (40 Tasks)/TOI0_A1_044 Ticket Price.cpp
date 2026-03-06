# include <iostream> 
# include <vector> 
# include <algorithm> 
# include <string> 
using namespace std ; 

int calculateTicketPrice(int age) {
    if (age < 5) return 0 ; 
    else if ((5 <= age) and (age <= 18)) return 100 ; 
    else if (age >= 19) return 150 ; 
}
int main() {
    // 1 ; input 
    int age ; string days_in_week ; 
    int ticket_price ; 
    
    cin >> age >> days_in_week ; 

    // 2 : check condition
    string daysInWeek[7] = {"Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat" , "Sun"} ; 
    for (int i = 0 ; i < 7 ; i++) { 
        if (days_in_week == daysInWeek[2]) { // Wed -> decrease 50% 
            ticket_price = 0.5 * calculateTicketPrice(age) ; 
        }
        else { 
            ticket_price = calculateTicketPrice(age) ; 
        }

        cout << ticket_price << endl ; 
        break ; 
    }
}