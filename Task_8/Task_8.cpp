#include <iostream>
#include <iomanip>

double step(double x, double y)
{
    double result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    printf("\x1b[1;33m");
    std::cout << "   Задание №8, выполнила Щербицкая Ника, 453501" << '\n';
    printf("\x1b[0m");
    printf("\x1b[33m");
    std::cout << "   Суть задания: Вычислить а0-2а1+4а2-8а3+...+2^(n-1)*(-1)^(n-1)a(n-1)" << '\n';
    printf("\x1b[0m");
    while (true)
    {
        double a;
        int n;
        std::cout << '\n' << "Введите значение первого члена: ";
        
         while (!(std::cin >> a) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << '\n' << "Нельзя вводить буквы или слишком большие числа, попробуйте еще раз \n" << '\n';
    }
        std::cout << "\nВведите количество членов: ";
        
         while (!(std::cin >> n) || (std::cin.peek() != '\n'))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
        std::cout << '\n' << "Нельзя вводить буквы или слишком большие числа, попробуйте еще раз \n" << '\n';
    }
        long double sum = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            sum += step(2, i) * step(-1, i) * a;
        }
        std::cout << std::setprecision(40) << "\nСумма равна: " << sum << std::endl;

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