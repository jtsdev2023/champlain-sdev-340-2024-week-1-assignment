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
    auto myMinMax = minmax_element(inputNumbers.begin(), inputNumbers.end());

    double range = *myMinMax.second - *myMinMax.first;

    return range;
}

double MathLibrary::myAverage(vector <double> inputNumbers)
{
    double sum = 0.0;
    for (const auto& item : inputNumbers)
    {
        sum += item;
    }

    return sum / inputNumbers.size();
}


vector <double> MathLibrary::myDeviance()
{
    double deviance = 0.0;
    double average = myAverage(inputNumbers);
    vector <double> myDevianceVector;

    for (const auto& item : inputNumbers)
    {
        deviance = pow(item - average, 2);
        myDevianceVector.push_back(deviance);
    }

    return myDevianceVector;
}

double MathLibrary::myVariance()
{
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
    double variance = 0.0;
    double sum = 0.0;
    vector <double> myDevianceVector;

    double average = myAverage(inputNumbers);
    myDevianceVector = myDeviance();
    variance = myAverage(myDevianceVector);

    return round(sqrt(variance) * 100) / 100;
}