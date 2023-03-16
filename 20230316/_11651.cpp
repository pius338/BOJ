#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second == b.second)
        return(a.first < b.first);
    return(a.second < b.second);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < n; i++)
		cout << arr[i].first << ' ' << arr[i].second << '\n';  
}