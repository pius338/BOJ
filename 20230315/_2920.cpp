#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	return (b < a);
}

int main()
{
	int n;
	vector<int> arr;
	for(int i = 0; i < 8; i++)
	{
		cin >> n;
		arr.push_back(n);
	}
	if(is_sorted(arr.begin(), arr.end()))
		cout << "ascending" << '\n';
	else if(is_sorted(arr.begin(), arr.end(), comp))
		cout << "descending" << '\n';
	else
		cout << "mixed" << '\n';
}