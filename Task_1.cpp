#include <iostream>
#include <stdio.h>
#include <cmath>
#include <limits>

void ignoreLine()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int main() {
    printf("\033[32m                    Выполнила Щербицкая Ника, 453501\n          Суть задания: Используя цикл while вычислить N = ∑ (ai - bi)^2\033[0m\n");
    summ:
    int i = 1;
    int sum = 0;
    while(i <= 30) {
    double ai = i % 2 != 0 ? (double)i : (double)i / 2;
    double bi = i % 2 != 0 ? pow((double)i, 2) : pow((double)i, 3);
    sum += pow(ai - bi, 2);
    i++;
    }
    std::cout << sum << " \n";
    std::cout << "Введите 1, чтобы вновь посчитать сумму, введите 2, чтобы выйти из программы \n";
    iff:
    int a;
    std::cin >> a;
    ignoreLine();
    if (a == 1) {
        goto summ;
    }
    if (a == 2) {
        goto w1;
    }
    if (std::cin.fail()) {
            std::cin.clear();
             ignoreLine();
            std::cout << "Введите 1 или 2\n";
               goto iff; }
    else {
        std::cout << "Введите 1 или 2" << std::endl;
         ignoreLine();
        goto iff;
    }
    w1:
    return 0;
}