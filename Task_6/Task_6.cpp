#include <iostream>
#include <iomanip>
#include <cmath>

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
    int k = 0;
    long double a;
    while (x > e)
    {
        x /= e;
        k++;
    }
    int q = 0;
    long double x2 = 1 / x;

    while (x2 > e)
    {
        x2 /= e;
        q--;
    }
    if (k != 0)
        a = x;
    if (q != 0)
        a = x2;
    else
        a = x;
    long double lnx = 0;
    for (int i = 1; i <= 10; i++)
    {
        lnx += step(-1, i + 1) * step(a - 1, i) / i;
    }
    if (k != 0)
        lnx = lnx;
    if (q != 0)
        lnx = -lnx;
    else
        a = lnx;
    return lnx + k + q;
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
        double x, min;
        std::cout << "Введите x: ";
        while (!(std::cin >> x) || (std::cin.peek() != '\n'))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
            std::cout << "\nНельзя вводить буквы или слишком большие числа, попробуйте еще раз: ";
        }

        std::cout << '\n';
        double a = sint(x), b = cost(x);
        long double c;
        if (x != 0)
            c = ln(fabs(x));
        std::cout << "sin(x) = ";
        printf("\x1b[1m");
        std::cout << std::setprecision(30) << a << '\n';
        printf("\x1b[0m");
        std::cout << "cos(x) = ";
        printf("\x1b[1m");
        std::cout << std::setprecision(30) << b << '\n';
        printf("\x1b[0m");
        if (x == 0)
        {
            std::cout << "Логарифма нуля не существует" << '\n';
            std::cout << '\n'
                      << "Наименьшее значение это sin(x) = ";
            printf("\x1b[1m");
            std::cout << std::setprecision(30) << a << '\n'
                      << '\n';
            printf("\x1b[0m");
        }
        else
        {
            std::cout << "ln(|x|) = ";
            printf("\x1b[1m");
            std::cout << std::setprecision(30) << c << '\n'
                      << '\n';
            printf("\x1b[0m");
            if (a <= b && a <= c)
            {
                std::cout << "Наименьшее значение это sin(x) = ";
                printf("\x1b[1m");
                std::cout << std::setprecision(30) << a << '\n'
                          << '\n';
                printf("\x1b[0m");
            }
            if (b <= a && b <= c)
            {
                std::cout << "Наименьшее значение это cos(x) = ";
                printf("\x1b[1m");
                std::cout << std::setprecision(30) << b << '\n'
                          << '\n';
                printf("\x1b[0m");
            }
            if (c <= a && c <= b)
            {
                std::cout << "Наименьшее значение это ln(|x|) = ";
                printf("\x1b[1m");
                std::cout << std::setprecision(30) << c << '\n'
                          << '\n';
                printf("\x1b[0m");
            }
        }

        std::cout << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n'
                  << std::endl;

        std::cout << "Введите, чтобы: \n"
                  << "Вновь посчитать значения: 1\n"
                  << "Выйти из программы: 2" << '\n'
                  << std::endl;
        while (true)
        {
            int a;

            while (!(std::cin >> a) || (std::cin.peek() != '\n'))
            {
                std::cin.clear();
                while (std::cin.get() != '\n')
                    ;
                std::cout << '\n'
                          << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n"
                          << '\n';
            }

            std::cout << '\n';

            if (a == 1)
            {
                std::cout << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n'
                          << std::endl;
                break;
            }
            if (a == 2)
                exit(0);
            else
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n"
                          << '\n';
        }
    }

    return 0;
}