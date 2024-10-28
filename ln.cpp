#include <iostream>
#include <cmath>

double step(double x, double y)
{
    double result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}

long double ln(long double x)
{
    const long double e = 2.718281828459045235360287471352;
    int k = 0;
    while (x > e)
    {
        x /= e;
        k++;
    }
    long double lnx = 0;
    for (int i = 1; i <= 10; i++)
    {
        lnx += step(-1, i + 1) * step(x - 1, i) / i;
    }
    return lnx + k;
}

int main()
{
    std::cout << log(1e-200);
    return 0;
}