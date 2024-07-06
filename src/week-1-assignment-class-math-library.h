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
