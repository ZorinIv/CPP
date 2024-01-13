#include <iostream>
using namespace std;

class fraction
{
    int numerator;
    int denominator;
 public:
    int input_numerator();
    int input_denominator();
    
    void summ(int x, int y, int m, int n);
    void subtraction(int x, int y, int m, int n);
    void multiplication(int x, int y, int m, int n);
    void division(int x, int y, int m, int n);

};
int main()
{
    setlocale(LC_ALL, "rus");

    fraction fraction1;
    fraction fraction2;
    fraction fraction3;
    fraction fraction4;
    fraction fraction5;
    fraction fraction6;

    int a = fraction1.input_numerator();
    int b = fraction1.input_denominator();
    int a1 = fraction2.input_numerator();
    int b1 = fraction2.input_denominator();

    fraction3.summ(a, a1, b, b1);
    fraction4.subtraction(a, a1, b, b1);
    fraction5.multiplication(a, a1, b, b1);
    fraction6.division(a, a1, b, b1);
    return 0;
}

int fraction::input_numerator()
{
    cout << "Введите числитель ";
    cin >> numerator;
    return numerator;
}
int fraction::input_denominator()
{
    cout << "Введите знаменатель ";
    cin >> denominator;
    return denominator;
}

void fraction::summ(int x, int y, int m, int n)
{
    cout << "Сложение " << endl;
    int rez_numerator = 0;
    int rez_denominator = 0;
    int whole;
    if (m == n)
    {
        rez_numerator = x + y;
        rez_numerator = m;
        cout << rez_numerator << "/" << rez_denominator << endl;
    }
    else
    {
        rez_numerator = (x * m) + (y * n);
        rez_denominator = m * n;
        cout << rez_numerator << "/" << rez_denominator << endl;
        if (rez_numerator > rez_denominator)
        {
            whole = rez_numerator / rez_denominator;
            rez_numerator = rez_numerator - (rez_denominator * whole);
            cout << "Выделение целого " << endl;
            cout << whole << " целых " << rez_numerator << "/" << rez_denominator << endl;
        }
    }

    cout << endl;
}
void fraction::subtraction(int x, int y, int m, int n)
{
    cout << "Вычитание " << endl;
    int rez_numerator = 0;
    int rez_denominator = 0;
    int whole;
    if (m == n)
    {
        rez_numerator = x - y;
        rez_denominator = m;
        cout << rez_numerator << "/" << rez_denominator << endl;
    }
    else
    {
        rez_numerator = (x * n) - (y * m);
        rez_denominator = m * n;
        cout << rez_numerator << "/" << rez_denominator << endl;
        if (rez_numerator > rez_denominator)
        {
            whole = rez_numerator / rez_denominator;
            rez_numerator = rez_numerator - (rez_denominator * whole);
            cout << "Выделение целого " << endl;
            cout << whole << " целых " << rez_numerator << "/" << rez_denominator << endl;
        }
    }

    cout << endl;
}
void fraction::multiplication(int x, int y, int m, int n)
{
    cout << "Умножение " << endl;
    int rez_numerator = x * y;
    int rez_denominator = m * n;
    int whole;
    cout << rez_numerator << "/" << rez_denominator << endl;
    if (rez_numerator > rez_denominator)
    {
        whole = rez_numerator / rez_denominator;
        rez_numerator = rez_numerator - (rez_denominator * whole);
        cout << "Выделение целого " << endl;
        cout << whole << " целых " << rez_numerator << "/" << rez_denominator << endl;
    }
    cout << endl;
}
void fraction::division(int x, int y, int m, int n)
{
    cout << "Деление " << endl;
    int rez_numerator = x * n;
    int rez_denominator = y * m;
    int whole;
    cout << rez_numerator << "/" << rez_denominator << endl;
    if (rez_numerator > rez_denominator)
    {
        whole = rez_numerator / rez_denominator;
        rez_numerator = rez_numerator - (rez_denominator * whole);
        cout << "Выделение целого " << endl;
        cout << whole << " целых " << rez_numerator << "/" << rez_denominator << endl;
    }
    cout << endl;
}


