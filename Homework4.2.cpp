#include <iostream>
#include <string>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    int num;
    std::cout << "Введите целое число: ";
    std::cin >> num;

    if (num < 0) 
    {
        num = -num;
    }

    int sum = 0;

    while (num > 0) 
    {
        sum += num % 10; 
        num /= 10;
    }

    std::cout << "Сумма цифр: " << sum << std::endl;

    return 0;
}