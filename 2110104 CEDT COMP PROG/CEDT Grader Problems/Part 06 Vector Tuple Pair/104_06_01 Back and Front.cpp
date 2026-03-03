# include <iostream> 
# include <vector> 
# include <algorithm> 
# include <sstream>
# include <string>
using namespace std ;

// define insert_swap function 
void insert_swap( vector<int> & baf , int r , int ele ) { 
    // baf implies real vector back_and_front (which uses & for real reference)
    // r implies round of adding element (start from 0)
    // ele represent element added

    // even numbers (0,2,4,...) will add lement to rightside (push_back)
    // odd numbers (1,3,5,...) will add element to leftside (insert at iterator begin)
    
    // check round if even or odd
    if (r % 2 == 0) { 
        baf.push_back(ele) ; 
    }

    else { 
        baf.insert(baf.begin() , ele); // insert element with iterator at begin
    }
}

// main function below
int main() {
    // define vector for all data 
    vector<int> back_and_front ; 

    // loop 1 : N round , with value insert swap left - right
    int N ; cin >> N ;
    int round_add = 0 ;

    for (int i = 0 ; i < N ; i++) {
        int num ; 
        cin >> num ; 

        // call function : insert_swap
        insert_swap(back_and_front , round_add , num) ;  
        
        // increment round_add each round
        round_add++ ; 
    }

    // loop 2 : add then split element in line (using stringstream is more safer)
    int num ; 
    cin >> ws; // for clear line 

    string line; getline(cin, line);   // input 1 line 
    stringstream ss(line);
    while( ss >> num ) {
        // stream each number into num
        insert_swap(back_and_front , round_add , num) ; 
        round_add++ ;
    }

    // loop 3 : input number until -1
    cin >> num ; 
    while (num != -1) { 
        cin >> num ;
        if (num == -1) break ; 
        insert_swap(back_and_front , round_add , num) ; 
        round_add++ ; 
    }

    // print out result 
    string output_baf = "[" ; 
    for (auto num : back_and_front) 
        output_baf += to_string(num) + ", " ; 

    // cut last comma_with_space (, ) then replace with ']'
    output_baf = output_baf.substr(0 , output_baf.length() - 2) + "]" ; 
    cout << output_baf << endl ;
    // substr(pos ,len_of_word)

    return 0 ; // for uncausing errors
    
}