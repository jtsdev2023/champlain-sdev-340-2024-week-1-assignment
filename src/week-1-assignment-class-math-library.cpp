#include "week-1-assignment-class-math-library.h"

int MathLibrary::Average(int a, int b)
{
    return (a + b) / 2;
}

int MathLibrary::Variance(int a, int b)
{
    return (a - b) * (a - b);
}

int MathLibrary::StandardDeviation(int a, int b)
{
    return sqrt(Variance(a, b));
}

int MathLibrary::Range(int a, int b)
{
    return a - b;
}
