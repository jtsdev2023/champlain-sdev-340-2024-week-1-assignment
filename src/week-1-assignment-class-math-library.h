#include <tuple>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class MathLibrary
{
    private:
        // vector <tuple <double, double>> myDevianceVector;
        // vector <tuple <double, double>> myDeviance(vector <double> inputNumbers, double average);
        vector <double> inputNumbers;
        
        vector <double> myDeviance();

    public:
        MathLibrary(vector <double> inputNumbers) : inputNumbers(inputNumbers) {};
        // double myRange(vector <double> inputNumbers);
        double myAverage(vector <double> inputNumbers);
        // double myVariance(vector <double> inputNumbers);
        // double myStandardDeviation(vector <double> inputNumbers);

        double myRange();
        // double myAverage();
        double myVariance();
        double myStandardDeviation();
        
        // vector <tuple <double, double>> myDeviance(vector <double> inputNumbers, double average);

};
