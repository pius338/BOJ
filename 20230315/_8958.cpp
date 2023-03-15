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
	int n, result, count;
	string str;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		count = 0;
		result = 0;
		cin >> str;
		for(int j = 0; j < str.size(); j++)
		{
			if(str.at(j) == 'O')
			{
				count++;
				result += count;
			}
			else
				count = 0;
		}
		cout << result << '\n';
	}
}