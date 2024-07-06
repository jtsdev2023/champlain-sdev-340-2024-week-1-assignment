#include <tuple>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


class MathLibrary
{
    private:
        void myDeviance(vector <double> inputNumbers, double average);

    public:
        double myRange(vector <double> inputNumbers);

        double myAverage(vector <double> inputNumbers);

        void myVariance();

        void myStandardDeviation();
};
