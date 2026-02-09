# include <iostream> 
# include <fstream> // for output file stream (ofstream , ofs)
using namespace std ; 

int main() {
    // define ofs variable type
    ofstream ofs ; 
    ofs.open("/Users/nubfightformydream/Documents/Intania 108 Courses/Year 3 Semester 1/2110211 Data Structure Grader/Part 0 2110104 COMP PROG CEDT For Intro Data Structure/CEDT Lecture Nattee/104 Lecture 05 String File Processing/104_Lecture_05_02 File Processing/outputwritten.txt");

    ofs << "Hello , " << endl ; 
    ofs << " world" << endl ;
    ofs << ("123\n456") << endl ; 

    // close file
    ofs.close();
    return 0 ; // return status 
}