#include <string>
#include <iostream>
#include "week-1-assignment-class-user-cli.cpp"
#include "week-1-assignment-class-math-library.cpp"


using namespace std;



int main() {
    
    UserCLI test1;
    vector <double> r = test1.getUserInput();
    test1.printUserInputVector(r);

    MathLibrary test2;
    cout << "Average: " << test2.myAverage(r) << endl;
    cout << "Range: " << test2.myRange(r) << endl;

    cout << "Variance: " << test2.myVariance(r) << endl;

    return 0;
}