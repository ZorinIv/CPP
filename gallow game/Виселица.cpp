#include <iostream>
#include "Gallows.h"
using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << fixed;
    cout.precision(1);
    Gallows game1;
    game1.GAME();
    return 0;
}