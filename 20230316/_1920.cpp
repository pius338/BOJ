#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int bi_search(int a)
{
    int left = 0, mid, right = arr.size() - 1, cnt = 0;
    while (left <= right)
    {
        mid = (right + left) / 2;
        if(arr[mid] == a)
            return (1);
        else if(arr[mid] < a)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (0);
}

int main()
{
    int n, m, a;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a); 
    }
    sort(arr.begin(), arr.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cout << bi_search(a) << '\n';
    }
}