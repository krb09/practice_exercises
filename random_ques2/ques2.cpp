// Define a function max_of_three()that takes three numbers as arguments and returns the largest of
// them.
#include "pch.h"
#include <iostream>
#include<iterator>
using namespace std;

int max(int, int, int);

int main()
{
	int a, b, c;
	cout << "Enter three numbers:";
	istream_iterator<int> input(cin);
	a = *input;
	++input;
	b = *input;
	++input;
	c = *input;
	int k = max(a, b,c);
	cout << "The largest number is: " << k;
}

int max(int x, int y, int z)
{
	int max = x;
	if (max < y)
		max = y;
	if (max < z)
		max = z;
	return max;
}