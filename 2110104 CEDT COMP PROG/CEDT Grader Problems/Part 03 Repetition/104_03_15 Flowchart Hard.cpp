# include <iostream>
# include <cmath>
using namespace std ; 

int main() {
    // input n-k
    int n,k ; 
    cin >> n >> k ; 

    // check if n is even or odd
    if (n % 2 != 0) {
        int sum_a = 0 , sum_b = 0 , sum_c = 0 , m = 0 ;
        while (m < k) {
            int a,b,c ;
            cin >> a >> b >> c ; 
            // check if a = b
            if (a == b) {
                if (a == b && b == c && a == c) {
                    if (a + b > k) {
                        sum_a += 1 ; sum_b += 2 ; sum_c -= 3 ;
                    }
                    else {
                        sum_a -= 3 ; sum_b -= 2 ; sum_c += 1 ; 
                    }

                }

                else {
                    sum_a += 2 ; sum_b -= 3 ; 
                }
            }

            m += 1 ; 
        } // end while loop

        cout << sum_a << " " << sum_b << " " << sum_c << endl ; 
    }

    else {
        int s,t; 
        cin >> s >> t ; 

        int x = s , y = t ; 

        if (s > t) {
            x = s - t ;
        }
        else {
            if (s < t) {
                y = 2 * (t - s) ; 
            }
        }

        if (x + y > k) {
            swap(x,y) ; 
            x = y + s * s ;
        }

        cout << x << " " << y << endl ; 
    }
}