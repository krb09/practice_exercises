/*Write a function that takes a character(i.e.a string of length 1) and returns Trueif it is a vowel, False
otherwise
*/

#include "pch.h"
#include <iostream>
using namespace std;
bool vowel(char);
int main()
{
	char char1;
	cout << "Enter a character: ";
	cin >> char1;
	bool t = vowel(char1);
	if (t)
		cout << "Its a vowel.";
	else
		cout << "Its a consonent.";
}
bool vowel(char c)
{
	char vowel[] = { 'a','e','i','o','u','A','E','I','O','U'};
	for (int i = 0; i < 10; i++)
	{
		if (vowel[i] == c)
			return true;
	}
	return false;
}