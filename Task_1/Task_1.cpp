#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{

    printf("\x1b[1;35m");
    std::cout << "   Задание №1, выполнила Щербицкая Ника, 453501" << '\n';
    printf("\x1b[0m");
    printf("\x1b[35m");
    std::cout << "   Суть задания: Используя цикл while вычислить N = ∑ (ai - bi)^2, \n"
    "где ai = i, bi = i^2, если i нечётное, ai = i / 2, bi = i^3 если i  чётное.\n" << '\n';
    printf("\x1b[0m");

    while (true)
    {
        int i = 1;
        int sum = 0;
        while (i <= 30)
        {
            double ai = i % 2 != 0 ? (double)i : (double)i / 2;
            double bi = i % 2 != 0 ? pow((double)i, 2) : pow((double)i, 3);
            sum += pow(ai - bi, 2);
            i++;
        }

        std::cout << "Сумма равна ";
        printf("\x1b[1m");
        std::cout << sum <<'\n';
        printf("\x1b[0m");

        std::cout << '\n' << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n' << std::endl;

        std::cout << "Введите, чтобы: \n";
        std::cout << "Вновь посчитать сумму: 1\n"
                  << "Выйти из программы: 2" << '\n' << std::endl;


    while (true) {
        int a;

         while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << '\n' << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n" << '\n';
    }

        std::cout << '\n';

            if (a == 1) {
                std::cout << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n' << std::endl;
                break; }
            if (a == 2)
                exit(0);
            else
                std::cout << "Необходимо ввести число 1 или 2, другие числа или буквы не допускаются!\n" << '\n';
        }
    }


    return 0;
}