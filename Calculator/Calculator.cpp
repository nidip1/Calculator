#include <iostream>
#include "Calc.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale (LC_ALL, "ru");
    double a, b;
    char operation;
    cout << "Введите первый операнд" << endl;
    cin >> a;
    cout << "Введите второй операнд" << endl;
    cin >> b;
    cout << "Введите операцию" <<'+' <<'\t' << '-'<<'\t' << '*' <<'\t' << '/' << endl;
    cin >> operation;
    Calc obj(a,b);
    switch (operation)
    {
    case'+':cout << "Результат сложения" << obj.add(); break;
    case'-':cout << "Результат вычитания" << obj.mines(); break;
    case'*':cout << "Результат умножения" << obj.multiply(); break;
    case'/':cout << "Результат деления" << obj.divide(); break;
    default:
        
    }

    return 0;
}