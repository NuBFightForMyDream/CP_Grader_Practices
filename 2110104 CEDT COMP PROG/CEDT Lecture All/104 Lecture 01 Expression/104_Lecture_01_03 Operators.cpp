# include <iostream> // input-output
# include <cmath> // math
using namespace std ; // namespace

int main() {
    // Main : 
        // priority of operators : in/decrement-> PEMDAS -> Assignments
    
    // Ex 1 : increment / decrement operators
    int a1 = 5 , a2 = 5 , a3 = 5 , a4 = 5 ;
    int y1 = 0  , y2 = 0 , y3 = 0 , y4 = 0 ;

        // do each increment/decrement
                // a_b4   a_after    y
    y1 = ++a1 ; // 5         6       6 
    y2 = a2++ ; // 5         6       5 
    y3 = --a3 ; // 5         4       4
    y4 = a4-- ; // 5         4       5

    cout << y1 << " " << y2 << " " << y3 << " " << y4 << endl ; 

    // Ex 2 : Function call
        // prove that sin(M_PI) != 0 (but nearly 0)
        // because M_PI is approximation of pi (not real pi value)

    cout << sin(M_PI) << endl ; // 1.22e-16

        // some of math operations
    double x ; 
    cout << "Input x : " ;
    cin >> x ;
    
    cout << "Trigonometry Function (sin,cos,tan) value : " ;
    cout << sin(x) << " " << cos(x) << " " << tan(x) << endl ; // x should be radian
    
    cout << "Absoulte Floor Ceil Function of x : " ;
    cout << abs(x) << " " << floor(x) << " " << ceil(x) << endl ;
    
    cout << "Sqrt , Log10 , Loge(ln) of X : " ;
    cout << sqrt(x) << " " << log10(x) << " " << log(x) << endl ;

    cout << "Power of x^2 , max , min of X and 5.0 : " ;
    cout << pow(x,2) << " " << max(x,5.0) << min(x,5.0) << endl; // compare double with double

    // Ex 3 : more complex assignment
    int a,b,c;
    a = 10 ;
    c = b = a * a + 4 ; // do from rightmost to leftmost
    cout << a << " " << b << " " << c ; // a = 10 , b = 104 , c= 104

    // Ex 4 : more complex
    int P ;
    cout << 1 - (P = 3.0 / 5 * 2) * 5.0 << endl; 
    // -4 cuz (P = 1.2 -> int -> 1) = 1 - (1)*5 = -4

    // Ex 5 : more complicated expression
    int z1 = 5+7*3-1*4; // z1 = 22
    int z2 = (5+7)*(3-1)*4; // z2 = 96
    double z3 = 20 + sin(30 * M_PI / 180) * sqrt(100); // z3 = 25
    int z4 = max(log10(1000000),pow(2,3))+1*0 ; // z4 = 8
    int z5 = 3;
    z5 += z5++ * 5 + abs(-3*4); // z5 = 31
    int z6 = 3;
    z6 += ++z6 * 5 + abs(-3*4); // z6 = 36
}