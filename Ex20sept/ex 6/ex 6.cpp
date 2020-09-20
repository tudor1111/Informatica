// ex 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Se citesc numere de la tastatură până la apariția lui zero. Să se determine câte dintre ele erau pare

#include <iostream>
using namespace std;

int main()
{
	int x, nr_pare = 0;
	//while (cin >> x)
	//{
	//	if (x == 0) break;
	//	if (x % 2 == 0)
	//		nr_pare++;
	//}
	cin >> x;
	while (x) // while(x!=0)
	{
		if (x % 2 == 0)
			nr_pare++;
		cin >> x;
	}
	cout << "Nr pare:" << nr_pare;

}


