#include <iostream>
#include <string>
#include <Windows.h>

int main() 
{
    int num;
    int sum = 0;
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    do 
    {
        std::cout << "Введите целое число или число '0', чтобы закончить: ";
        std::cin >> num;

        if (num != 0) 
        {
            sum += num;
        }
    } 
    while (num != 0);

    std::cout << "Сумма: " << sum << std::endl;
    return 0;
}