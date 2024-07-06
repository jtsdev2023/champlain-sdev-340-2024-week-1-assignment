#include "week-1-assignment-class-math-library.h"

double MathLibrary::myAverage(vector <double> inputNumbers)
{
    double sum = 0.0;
    for (const auto& item : inputNumbers)
    {
        sum += item;
    }

    return sum / inputNumbers.size();
}

void MathLibrary::myDeviance(vector <double> inputNumbers, double average)
{

    double deviance = 0.0;
    tuple <double, double, double> devianceTuple;

    for (const auto& item : inputNumbers)
    {
        deviance = pow(item - average, 2);

        devianceTuple = make_tuple(item, average, deviance);
    }

}

void MathLibrary::myVariance()
{
    
}

void MathLibrary::myStandardDeviation()
{
   
}

double MathLibrary::myRange(vector <double> inputNumbers)
{
    
}
