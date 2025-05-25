#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    int num;

    std::cout << "Введите целое число: ";
    std::cin >> num;

    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
    return 0;
}