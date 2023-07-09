#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	string str;
	vector<int> arr(26, 0);
	cin >> str;
	for (int i = 0; i < str.size(); i++)
		arr[str[i] - 97]++;
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << ' ';
}