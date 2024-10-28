#include <iostream>
#include <cmath>
#include <iomanip>

int prov()
{
    int a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << "\nНельзя вводить буквы или слишком большие числа, попробуйте еще раз: ";
    }
    return a;
}
double provdouble()
{
    double a;
    while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << "\nНельзя вводить буквы или слишком большие числа, попробуйте еще раз: ";
    }
    return a;
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

int main()

{
    printf("\x1b[1;36m");
    std::cout << "   Задание №4, выполнила Щербицкая Ника, 453501, вариант 14" << '\n';
    printf("\x1b[0m");
    printf("\x1b[36m");
    std::cout << "   Суть задания: Необходимо разложить функцию Y(x) из своего варианта в ряд S(x),\n"
                 "затем с помощью полученного ряда найти значение функции\n"
                 "и сравнить его со значением, вычисленным с помощью стандартных функций.\n"
                 "Программа должна запросить у пользователя количество членов ряда (n), затем запросить\n"
                 "у пользователя количество чисел, от которых он хочет посчитать функцию,\n"
                 "затем пользователь вводит по одному числу (x от 0.1, до 1), программа считает\n"
                 "значение функции с помощью ряда и с помощью стандартных функций и\n"
                 "выводит оба значения.\n"
              << '\n';
    printf("\x1b[0m");
    while (true)
    {
        int n, b;
        double x;
        std::cout << "Введите количество членов ряда: ";
        n = prov();
        std::cout << '\n';
        std::cout << "Введите количество чисел, от которых хотите посчитать функцию: ";
        b = prov();
        std::cout << " \n";

        for (int i1 = 1; i1 <= abs(b); i1++)
        {
            std::cout << "[" << i1 << "]" << " ЗНАЧЕНИЕ" << '\n'
                      << std::endl;
            std::cout << "Введите x(от 0.1 до 1): ";
            while (true)
            {
                x = provdouble();

                if (x < 0.1 || x > 1)
                    std::cout << "\nх должен принадлежать промежутку (0.1; 1): ";
                else
                    break;
            }
            long double sx = 0.0;
            for (double i = 1.0; i <= abs(n); i++)
                sx += (pow(i, 2.0) * pow(x, i)) / (factorial(2.0 * i + 1.0));

            std::cout << "\nЗначение по ряду (S(x)): ";
            printf("\x1b[1m");
            std::cout << std::setprecision(30) << sx << '\n';
            printf("\x1b[0m");
            std::cout << "Значение по функции (Y(x)): ";
            printf("\x1b[1m");
            std::cout << std::setprecision(30) << (1.0 / 4.0) * ((((x + 1.0) / sqrt(x)) * sinh(sqrt(x))) - cosh(x)) << '\n'
                      << std::endl;
            printf("\x1b[0m");
        }
        std::cout << '\n'
                  << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n'
                  << std::endl;

        std::cout << "Введите, чтобы: \n"
                  << "Вновь посчитать значения: 1\n"
                  << "Выйти из программы: 2" << '\n'
                  << std::endl;

        while (true)
        {
            int a;
            a = prov();

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