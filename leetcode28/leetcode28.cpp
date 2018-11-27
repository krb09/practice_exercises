// leetcode28

#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>&, int);
int main()
{
	vector<int> nums = { 0,1,2,2,3,0,4,2 };
	cout << "Length of vector:" << nums.size() << endl;
	int value;
	cout << "Enter the value: " << endl;
	cin >> value;
	int k= removeElement(nums, value);
	for (int i = 0; i < k; i++)
	{
		cout << "[" << nums[i] << " ]";
	}
}
int removeElement(vector<int> &nums, int val)
{
	int i = 0;
	for (int j = 0; j < nums.size(); j++) {
		if (nums[j] != val) {
			nums[i] = nums[j];
			i++;
		}
	}
	return i;
}

