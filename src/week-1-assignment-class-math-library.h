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
        
        vector <double> myDeviance(vector <double> inputNumbers, double average);

    public:
        double myRange(vector <double> inputNumbers);
        double myAverage(vector <double> inputNumbers);

        double myVariance(vector <double> inputNumbers);

        void myStandardDeviation();
        
        // vector <tuple <double, double>> myDeviance(vector <double> inputNumbers, double average);

};
