// 1. Define a function max()that takes two numbers as arguments and returns the largest of them. Use the ifthen­else
// construct available in Python. (It is true that Python has the max()function built in, but writing it
// yourself is nevertheless a good exercise.)

#include "pch.h"
#include <iostream>
#include<iterator>
using namespace std;

int max(int, int);

int main()
{
	int a, b;
	cout << "Enter two numbers:";
	istream_iterator<int> input(cin);
	a = *input;
	++input;
	b = *input;
	int k = max(a, b);
	if (k != 0)
		cout << "The largest number is: "<<k;
	else
		cout << "The numbers are equal";
}

int max(int x, int y)
{
	int max = x;
	if (max > y)
		return x;
	else if (max < y)
		return y;
	else
		return 0;
}