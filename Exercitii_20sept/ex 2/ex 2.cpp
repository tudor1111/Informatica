// ex 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Se dau doua nr de 4 cifre.
//Sa se decida care este mai mare dintre ele. 
//Sa se calculeze suma dintre prima cifra a celui mai mare si a doua cifra a celui mai mic.

#include <iostream>
using namespace std;

int main()
{
    int a, b, p, d;
    cin >> a >> b;
    if (a > b)
    {
        p = a / 1000;
        d = b / 100 % 10;
        cout << "suma este:" << p + d;

    }
    else {
        p = b / 1000;
        d = a / 100 % 10;
        cout << "suma este:" << d + p;


    }
    
}

