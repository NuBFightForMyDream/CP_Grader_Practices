# include <iostream> 
# include <utility> // pair
# include <cmath> // math 
using namespace std ; 

// create solve_quadrtic function (return pair <float , float>)
pair <float , float> solve_quadratic(int a , int b , int c) {
    float discriminant = pow(b , 2) - 4*a*c ;
    float root1 = ( -b + sqrt(discriminant) ) / (2 * a) ;
    float root2 = ( -b - sqrt(discriminant) ) / (2 * a) ; 
    return make_tuple(root1 , root2) ; 
}

int main() {
    // define answer
    pair <float , float> answers = solve_quadratic( 1 , -5 , 6 ) ; 
    cout << "Result of quadratic : " << answers.first << " , " << answers.second << endl ; // 3 , 2
}
