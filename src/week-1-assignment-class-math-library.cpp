/**
 * File: week-1-assignment-class-math-library.cpp
 * Author: Jeremy Sizemore
 * Date: July 3, 2024
 * Course: SDEV-340
 * 
 * Description: This file is the implementation of the MathLibrary class.
 */

#include "../include/week-1-assignment-class-math-library.h"


double MathLibrary::myRange()
{
    // used stackoverflow to figure out how to find the range in c++
    // which included using the minmax_element function
    auto myMinMax = minmax_element(inputNumbers.begin(), inputNumbers.end());
    double range = *myMinMax.second - *myMinMax.first;

    return range;
}

double MathLibrary::myAverage(vector <double> inputNumbers)
{
    // method to determine the average of the input numbers
    double sum = 0.0;
    // loop through the input numbers and sum them
    for (const auto& item : inputNumbers)
    {
        sum += item;
    }

    return sum / inputNumbers.size();
}


vector <double> MathLibrary::myDeviance()
{
    // method to determine the deviance of the input numbers
    double deviance = 0.0;
    double average = myAverage(inputNumbers);
    vector <double> myDevianceVector;

    // loop through the input numbers and calculate the deviance
    for (const auto& item : inputNumbers)
    {
        deviance = pow(item - average, 2);
        myDevianceVector.push_back(deviance);
    }

    return myDevianceVector;
}

double MathLibrary::myVariance()
{
    // method to determine the variance of the input numbers
    double variance = 0.0;
    double sum = 0.0;
    vector <double> myDevianceVector;

    double average = myAverage(inputNumbers);
    myDevianceVector = myDeviance();
    variance = myAverage(myDevianceVector);

    return variance;
}

double MathLibrary::myStandardDeviation()
{
    // method to determine the standard deviation of the input numbers
    double variance = 0.0;
    double sum = 0.0;
    vector <double> myDevianceVector;

    double average = myAverage(inputNumbers);
    myDevianceVector = myDeviance();
    variance = myAverage(myDevianceVector);

    // use stackoverflow to figure out how to round to 2 decimal places in c++
    return round(sqrt(variance) * 100) / 100;
}