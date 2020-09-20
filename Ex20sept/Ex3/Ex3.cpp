// Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Se citeste un n. sa se afiseze urmatoarea piramida.
//1
//1 2
//1 2 3
//.......
//1 2 3 ... n

#include <iostream>
using namespace std;


int main()
{
	int n, i,j;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}


