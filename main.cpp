#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int mayDay;
    std::cout << "Введите майский день: ";
    std::cin >> mayDay;
    if (mayDay < 1 || mayDay > 31) {
        std::cout << "Неверная дата";
    } else if   (   (mayDay >= 1 && mayDay <= 5)|| // Праздники с 1 по 5
                    (mayDay >= 8 && mayDay <= 10)|| // Праздники с 8 по 10
                    (mayDay%7==6)|| // Суббота
                    (mayDay%7==0)) { // Воскресенье
        std::cout << "Выходной";
    } else {
        std::cout << "Рабочий";
    }
}


