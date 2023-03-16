#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<int, string> &a, const pair<int, string> &b)
{
    if(a.first == b.first)
        return(0);
    return(a.first < b.first);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;
    stable_sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < n; i++)
		cout << arr[i].first << ' ' << arr[i].second << '\n';  
}