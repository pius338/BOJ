#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
    if(a.first == b.first)
        return (a.second < b.second);
    return (a.first < b.first);
}

int main()
{
    int n;
    string str;
    cin >> n;
    vector<pair<int, string>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        arr[i].first = str.size();
        arr[i].second = str;
    }
    sort(arr.begin(), arr.end(), comp);
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i].second << '\n';    
}