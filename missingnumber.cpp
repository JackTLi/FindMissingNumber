#include <vector>
#include <iostream>

using namespace std;

int findMissingNumber(vector<int> list) 
{
	int max = list[0];
	int min = list[0];

	int sum = 0;

	for (vector<int>::iterator it = list.begin(); it < list.end(); it++)
	{
		if (*it  > max) 
		{
			max = *it;
		}
		if (*it  < min)
		{
			min = *it;
		}

		sum += *it;
	}

	// 1+2+3+ ... + k = (k * (k + 1)) / 2
	int expected = ((max * (max + 1)) / 2) - ((min * (min + 1)) / 2) + min;

	return expected - sum;
}

int main () 
{

	int length;
	cin >> length;

	vector<int> list;

	for (int i = 0; i < length; i++) 
	{
		int temp;
		cin >> temp;
		list.push_back(temp);
	}

	cout << "Missing Number: " << findMissingNumber(list) << endl;

}