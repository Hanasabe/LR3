#include <iostream>
#include <iomanip>
#include <cmath>

long double clearlong()
{
    long double a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << "Нельзя вводить буквы или слишком большие числа, попробуйте еще раз: ";
    }
    return a;
}
double fabs(double x)
{
    return x >= 0 ? x : -x;
}
double sqrt(double x)
{
    const double eps = 1e-15;
    double result = x;
    double xn = 0;
    while (fabs(result - xn) > eps)
    {
        xn = result;
        result = (xn + x / xn) / 2;
    }
    return result;
}

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
double sign(double x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
long double Pi = 3.14159265358980;

int clear()
{
    int a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n";
    }
    return a;
}

long double sin(long double x)
{
    long double fact = 1, sx = x, z = 0, q = 2, f = 0;


    for (int j = 1; j <= 10; j++, sx *= x * x, fact *= q * (q + 1), q += 2)
    {
        if ((j + 1) % 2 == 0)
        {
            z = 1.0;
        }
        else z = -1.0;
        //std::cout << f << " + " << z << " * " << sx << " / " << fact << " ";
        f = f + z * sx / fact;
        //std::cout << " = " << f<<'\n';
    }


    return f;
}

long double cos(long double x)
{
    long double fact = 1, sx = x*x, z = 0, q = 2, f = 0;


    for (int j = 1; j <= 10; j++, sx *= x * x, fact *= q * (q - 1), q += 2)
    {
        if ((j + 1) % 2 == 0)
        {
            z = 1.0;
        }
        else z = -1.0;
        //std::cout << f << " + " << z << " * " << sx << " / " << fact << " ";
        f = f + z * sx / fact;
        //std::cout << " = " << f<<'\n';
    }


    return f;
}

long double ln(long double a)
{
    //(1+x)/(1-x)=a
    //1+x=a-x*a
    //x=a-1/1+a
    long long k = 0;
    long double f = 0;
    const long double LN2 = 0.693147180559945309417232121458176568;


    while (a > 2.0)
    {
        a /= 2.0;
        k++;
    }


    long double x = (a - 1.0) / (a + 1.0), b = x;


    for (int j = 1; j <= 10000000; j++, b *= x*x)
    {
       
        f = f + b / (2 * j - 1);
        //std::cout << " = " << f<<'\n';
    }


    return 2*f + k*LN2;
}

int main()
{
    printf("\x1b[1;31m");
    std::cout << "   Задание № 6, выполнила Щербицкая Ника, 453501" << '\n';
    printf("\x1b[0m");
    printf("\x1b[31m");
    std::cout << "   Суть задания: Из величин, определяемых выражениями a = sinx, b = cosx, c = ln|x| при\n"
                 "заданном х, определить и вывести на экран дисплея минимальное значение.\n"
              << '\n';
    printf("\x1b[0m");
    while (true)
    {
        long double x, min;
        std::cout << "Введите x: ";
        x = clearlong();
        x = fmodl(x, 2.0 * Pi);
        long double a = sin(x), b = cos(x), c = ln(fabs(x));
        if (a <= b && a <= c)
            std::cout << "Наименьшее значение это sin(x) = " << std::setprecision(30) << a << '\n';
        if (b <= a && b <= c)
            std::cout << "Наименьшее значение это cos(x) = " << std::setprecision(30) << b << '\n';
        if (c <= a && c <= b)
            std::cout << "Наименьшее значение это ln(|x|) = " << std::setprecision(30) << c << '\n';

        std::cout << "Введите, чтобы: \n";
        std::cout << "Снова посчитать наименьшее значение: 1\n"
                  << "Выйти из программы: 2" << std::endl;

        while (true)
        {
            int a;
            a = clear();

            if (a == 1)
                break;
            if (a == 2)
                exit(0);
            else
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n";
        }
    }

    return 0;
}