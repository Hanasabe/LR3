#include <iostream>
#include <cmath>

int main()
{
    printf("\x1b[1;34m");
    std::cout << "   Задание №3, выполнила Щербицкая Ника, 453501\n";
    printf("\x1b[0m");
    printf("\x1b[34m");
    std::cout << "   Суть задания: Используя цикл for составить программу вычисления\n"
                 "значений функции y = sin(x) - cos(x) на отрезке [A, B] в точках Xi = A + i * H,\n"
                 "где H = (B - A) / M, M = 20, A = 0, B = π / 2.\n"
              << '\n';
    printf("\x1b[0m");

    while (true)
    {
        long double A = 0.0;
        const long double pi = 3.141592653589793238462643383279502884197;
        long double B = pi / 2;
        long double M = 20.0;
        long double H = (B - A) / M;
        long double y, x;
        int i = 1;
        x = A;
        for (i = 0; x >= A && x <= B; i++, x = A + i * H)
        {
            y = sin(x) - cos(x);
            std::cout << "[" << i << "] y = " << y << std::endl;
        }
            std::cout << '\n' << "▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭▬▭" << '\n' << std::endl;

        std::cout << "Введите, чтобы: \n" << "Вновь посчитать сумму: 1\n" << "Выйти из программы: 2" << '\n' << std::endl;


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