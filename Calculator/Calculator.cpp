#include <iostream>
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

    return 0;
}