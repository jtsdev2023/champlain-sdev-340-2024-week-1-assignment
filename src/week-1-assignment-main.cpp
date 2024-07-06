#include "week-1-assignment-class-user-cli.cpp"
#include "week-1-assignment-class-math-library.cpp"

int main() {
    
    UserCLI test1;
    vector <double> r = test1.getUserInput();
    test1.printUserInputVector(r);

    MathLibrary test2(r);
    cout << "Average: " << test2.myAverage(r) << endl;
    cout << "Range: " << test2.myRange() << endl;
    cout << "Variance: " << test2.myVariance() << endl;
    cout << "Standard Deviation: " << test2.myStandardDeviation() << endl;

    return 0;
}