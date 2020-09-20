// Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Se citeste un n. Sa se construiasca o piramida:
//*
//* *
//* * *
//* * * *

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


