// Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Se dau n numere naturale. Calculați media lor aritmetica.


#include <iostream>
using namespace std;
int main()
{
	int n, i, x, s = 0;
	cin >> n; //citesc numarul de numere
	for (i = 1; i <= n; i++)
	{
		cin >> x; //citesc numerele
		s = s + x;
	}

	cout << "Media aritmetica este:" << float(s) / float(n);


}

