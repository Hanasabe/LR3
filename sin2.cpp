#include <iostream>
#include <cmath>
#include <iomanip>

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

int main () {
    long double x;
    std::cin >> x;
    std::cout << std::setprecision(20) << cost(x);
}