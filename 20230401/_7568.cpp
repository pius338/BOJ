#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> arr(n);
	vector<int> r_arr(n, 0);
	vector<int> rr_arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if((arr[i].first < arr[j].first && arr[i].second < arr[j].second))
				r_arr[i]++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << r_arr[i] + 1<< ' ';
}