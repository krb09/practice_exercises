/* Define a function that computes the length of a given list or string. (It is true that Python has the len()
function built in, but writing it yourself is nevertheless a good exercise.)*/

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int length(string);

int main()
{
	string s;
	cout << "Enter a string:";
	cin >> s;
	int k= length(s);
	cout << "The length of the string is:" << k;
}
int length(string s)
{
	int count = 0,i=0;
	while (s[i] != '\0')
	{
		count = count + 1;
		i++;
	}
	return count;
}