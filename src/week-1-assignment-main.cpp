/**
 * File: week-1-assignment-main.cpp
 * Author: Jeremy Sizemore
 * Date: July 3, 2024
 * Course: SDEV-340
 * 
 * Description: This file is the main driver for the week 1 assignment.
 * It includes the UserCLI and MathLibrary classes
 * 
 * GitHub: https://github.com/jtsdev2023/champlain-sdev-340-2024-week-1-assignment
 * Git: https://github.com/jtsdev2023/champlain-sdev-340-2024-week-1-assignment.git
 */

#include <memory>
#include "week-1-assignment-class-user-cli.cpp"
#include "week-1-assignment-class-math-library.cpp"

using namespace std;

int main() {
    
    // use a smart pointer
    // used stackoverflow to figure out how to use a smart pointer
    std::unique_ptr<vector<double>> r = make_unique<vector<double>>();
    
    // initialize the UserCLI class and get user input
    UserCLI user01;
    *r = user01.getUserInput();
    user01.printUserInputVector(*r);

    // initialize the MathLibrary class and calculate values
    MathLibrary userCalculations(*r);
    cout << "Average: " << userCalculations.myAverage(*r) << endl;
    cout << "Range: " << userCalculations.myRange() << endl;
    cout << "Variance: " << userCalculations.myVariance() << endl;
    cout << "Standard Deviation: " << userCalculations.myStandardDeviation() << endl;

    return 0;
}