#include <iostream>
#include <cmath>

int main()
{

    printf("\x1b[1;33m");
    std::cout << "   Задание №2, выполнила Щербицкая Ника, 453501" << '\n';
    printf("\x1b[0m");
    printf("\x1b[33m");
    std::cout << "   Суть задания: Используя цикл do while найти сумму ряда с точностью ε = 10^-3,\nобщий член которого dn = 1/2^n + 1/3^n. При составлении программы считать,\nчто точность достигнута, если dn < ε\n"
              << '\n';
    printf("\x1b[0m");

    while (true)
    {
        long double e = 1e-3;
        double dn, sum = 0;
        int n = 1;

        do
        {
            double dna = 1 / (pow(2, n));
            double dnb = 1 / (pow(3, n));
            dn = dna + dnb;
            sum += dn;
            n++;
        } while (dn >= e);

        std::cout << "Сумма равна ";
        printf("\x1b[1m");
        std::cout << sum << std::endl;
        printf("\x1b[0m");

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