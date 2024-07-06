#include <string>
#include <iostream>
#include "week-1-assignment-class-user-cli.cpp"
// #include "week-1-assignment-class-math-library.cpp"


using namespace std;



int main() {
    
    UserCLI test1;
    vector <double> r = test1.getUserInput();
    test1.printUserInputVector(r);

    // MathLibrary test2;
    // cout << "Average: " << test2.Average(r[0], r[1]) << endl;
    // cout << "Variance: " << test2.Variance(r[0], r[1]) << endl;
    // cout << "Standard Deviation: " << test2.StandardDeviation(r[0], r[1]) << endl;
    // cout << "Range: " << test2.Range(r[0], r[1]) << endl;

    return 0;
}