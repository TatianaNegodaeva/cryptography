#include <iostream>
#include <string>
#include "karatsuba.cpp"
using namespace std;

int main() {
    string x, y;

    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;

    // Преобразуем строки в целые числа
    int intX = stoi(x);
    int intY = stoi(y);

    int result = karatsuba(intX, intY);
    cout << "Результат: " << result << endl;

    return 0;
}