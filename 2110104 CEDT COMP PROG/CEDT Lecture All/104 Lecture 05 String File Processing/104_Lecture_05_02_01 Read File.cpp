# include <iostream> // cin & cout
# include <fstream> // for if stream (file processing)
using namespace std ;

int main() {
    // define ifstream (input file stream) variable
    ifstream ifs ; 
    ifs.open("/Users/nubfightformydream/Documents/Intania 108 Courses/Year 3 Semester 1/2110211 Data Structure Grader/Part 0 2110104 COMP PROG CEDT For Intro Data Structure/CEDT Lecture Nattee/104 Lecture 05 String File Processing/104_Lecture_05_02 File Processing/myinfo.txt");

    // store to variable then cout each line (like in readline in python)
    string a;
    ifs >> a ; // read (getline) until found space 
    cout << a << endl ; 

    // read until end of file
    cout << "------ Read Until Close File ------" << endl ;
    while (getline(ifs , a)) { // getline each line until lastest line
        cout << a << endl ; // print line (continue read from first command)
    }
    // close file
    ifs.close() ; 
    return 0 ; // return status 
}
