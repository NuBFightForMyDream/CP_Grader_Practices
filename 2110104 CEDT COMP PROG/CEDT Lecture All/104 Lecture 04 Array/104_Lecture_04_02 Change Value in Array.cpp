# include <iostream>
# include <string>
using namespace std ;

// We have 2 fn test : var & array
void test(int a) {
    a = 10 ; // a is inside test fn , so a will be changed inside fn
}

void fill(char b[] , char value , int begin , int end) {
    // b is array of char , value is info we want to change , start at begin , ending at end
    // fill fn will slicing then change info inside array
    while (begin < end) {
        b[begin++] = value ; // change value from negin to b4 end
        // NOTE : it will change original address in array
    }
}

int main() {
    // TEST function : a wont change cuz a is not a in test fn
    int a = 5 ; 
    cout << "value a is : " << a ; // a = 10 inside test fn doesnt affect a outside fn
    

    // FILL function : c changed bcz array stored info
    char c[10]; // define array of char
    // fill info in array -> {'a','a',...'a'}
    for (int i = 0 ; i < 10 ; i++) {
        c[i] = 'a' ; 
    }
    // now we got c array as {'a','a', ... ,'a'}

    // calling fill fn to change -> it will point to index then replace
    fill(c , 'x' , 3 , 6) ; // fill in array c from 3 to 5 (not 6 !!!)
    // now we got c array as {'a','a','c','c','c','a',...'a'}
}