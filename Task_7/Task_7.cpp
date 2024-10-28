#include <iostream>
int step(int x, int y)
{
    int result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}
int main()
{
    int n, a, num, a1, a2, a3, a4, a5, a6, a7, a8, a9, q;
    std::cout << "Введите число, до которого требуется вывести все числа Армстронга: ";
    std::cin >> n;
    a = 1;
    std::cout << "Числа Армстронга: ";
    while (a < n)
    {
        q = a;
        num = 0;
        while (q > 0)
        {
            num++;
            q = q / 10;
        }

        int i;
        double an;
        int h = 0;
        for (i = 1; i <= num; i++)
        {
            double we = a % step(10, i);
            an = (a % step(10, i)) / (step(10, i - 1));
            h += step(an, num);
        }
        if (h == a)
        {
            std::cout << a << " ";
        }
        a++;
    }
    std::cout << std::endl;
    return 0;
}
