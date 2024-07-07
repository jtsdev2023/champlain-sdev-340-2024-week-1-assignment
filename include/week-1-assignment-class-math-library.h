/**
 * File: week-1-assignment-class-math-library.h
 * Author: Jeremy Sizemore
 * Date: July 3, 2024
 * Course: SDEV-340
 * 
 * Description: This file contains the MathLibrary class definition.
 */

#include <tuple>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class MathLibrary
{
    private:
        vector <double> inputNumbers;
        vector <double> myDeviance();

    public:
        MathLibrary(vector <double> inputNumbers) : inputNumbers(inputNumbers) {};
        double myAverage(vector <double> inputNumbers);
        double myRange();
        double myVariance();
        double myStandardDeviation();

};
