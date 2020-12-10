// Lab_05_2.cpp
// < Кузів Назар >
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 6


#include <iostream>
#include<cmath>
#include "Project 5.5.h"

using namespace std;

int f(int n, int level, int& depth);

int main()
{
	int y, x, n ;
	int depth = 0;
	int level = 1;
	cout << "n = "; cin >> n;

	y = n;
 
	do {
		n = y ;
		x = f(n, level, depth);
		
		y = f(x, level , depth);
		
	} while (y != n);
	
	cout << "Depth = " << depth << endl;
	cout << "y = " << y << endl;

	return 0;
}
int f(int n, int level, int& depth)
{
	if (level > depth)

		depth = level;
	cout << "Level = " << level << endl;

	if (n == 1)
		return 1;
	else
		if (n % 2)
			return 2 * f(n / 2, level + 1, depth) + 1;
		else
			return  2 * f(n / 2, level + 1, depth) - 1;
}


