// Exercitii_20sept.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Se citeste un nr de 3 cifre. Sa se afiseze prima cifra.
// Se dau doua nr de 4 cifre.
//Sa se decida care este mai mare dintre ele. 
//Sa se calculeze suma dintre prima cifra a celui mai mare si a doua cifra a celui mai mic.

#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c;
	cin >> n;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	cout << a;
}


