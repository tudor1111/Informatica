// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Se citeste un n si apoi n numere. Sa se calculeze media geometrica.
//radical =  sqrt(nr1* nr2)
////radical(primulnr*aldoilea*altreilea*....*catenrsunt)

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i, x, p = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        p = p * x;
    }
    cout << "media geometrica este:" << sqrt(p);

}

