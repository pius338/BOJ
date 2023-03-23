#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, tmp;
	vector<int> arr;
	cin >> n >> m;
	tmp = (n > m) ? m : n;
	for (int i = 1; i <= tmp; i++)
		if(!(n % i) && !(m % i))
			arr.push_back(i);
	tmp = *max_element(arr.begin(), arr.end());
	cout << tmp << '\n' << (n * m) / tmp;
		
}