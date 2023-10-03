// 2. Даны два числа (вещественные). Если первое число положительное или равно нулю, то умножить второе число на 1000, иначе — разделить на 10.

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    double number1, number2;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    // Проверка number1 на неотрицательность
    if (number1 >= 0) {
        cout << "Ответ: " << number2 * 1000;
    }
    else {
        cout << "Ответ: " << number2 / 10;
    }

    return 0;
}