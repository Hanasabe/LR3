#include <iostream>
#include <iomanip>
#include <cmath>

long double factorial(long double x)
{
    long double result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

double step(double x, double y)
{
    double result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}

const long double pi = 3.141592653589793238462643383279502884197;


long double sint(long double x)
{
    x = fmodl(x, 2.0 * pi);
    long double sinx = 0, term = 0;
    for (int i = 1; i <= 20; i++)
    {
        sinx += (step(-1, i - 1) * step(x, (2 * i - 1))) / factorial(2 * i - 1);
    }
    return sinx;
}
long double cost(long double x)
{
    x = fmodl(x, 2.0 * pi);
    return sqrt(1 - sin(x) * sin(x));
}

long double ln(long double x)
{
    const long double e = 2.718281828459045235360287471352;
    int k = 0; long double a;
    while (x > e)
    {
        x /= e;
        k++;
    }
    int q = 0;
    long double x2 = 1 / x;

    while (x2 > e) {
        x2 /= e;
        q--;
    }
    if (k != 0) a = x;
    if (q != 0) a = x2;
    else a = x;
    long double lnx = 0;
    for (int i = 1; i <= 10; i++)
    {
        lnx += step(-1, i + 1) * step(a - 1, i) / i;
    }
    if (k != 0) lnx = lnx;
    if (q != 0) lnx = -lnx;
    else a = lnx;
    return lnx + k + q;
}
int main () {
    std::cout << cost(0);
}