# include <iostream> 
# include <tuple> 
using namespace std ; 

int main() {
    // input variables
    string name1 , name2 ;
    int d1 , m1 , y1 , d2 , m2 , y2 ; 

    cin >> name1 >> d1 >> m1 >> y1 ;
    cin >> name2 >> d2 >> m2 >> y2 ; 

    // create tuple of int
    tuple<int , int , int> info1 = make_tuple( y1 , m1 , d1 ) ; 
    tuple<int , int , int> info2 = make_tuple( y2 , m2 , d2 ) ; 

    // check tuple comparison (same logic as list comparison in python)
    if (info1 < info2) { // info1 older than info2
        cout << name1 << " is older" << endl ; 
    }
    else if (info1 > info2) {
        cout << name2 << " is older" << endl ; 
    }
    else {
        cout << "Both born in same day" << endl ; 
    }
}   