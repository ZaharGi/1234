#include <iostream>
#include <cmath>

using namespace std;

// Функции для вычислений
double ploshad(double a, double b, double h) {
    return (a + b) * h / 2;
}

double perimetr(double a, double b, double c, double d) {
    return a + b + c + d;
}

double srednLin(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double a, b, c, d, h;
    
    cout << "Введите данные для трапеции:\n";
    cout << "Верхнее основание (a): ";
    cin >> a;
    cout << "Нижнее основание (b): ";
    cin >> b;
    cout << "Левая боковая сторона (c): ";
    cin >> c;
    cout << "Правая боковая сторона (d): ";
    cin >> d;
    cout << "Высота (h): ";
    cin >> h;
    
    cout << "\nРезультаты:\n";
    cout << "Площадь = " << ploshad(a, b, h) << endl;
    cout << "Периметр = " << perimetr(a, b, c, d) << endl;
    cout << "Средняя линия = " << srednLin(a, b) << endl;
    
    return 0;
}
