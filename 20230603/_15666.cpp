#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;

void ft_bt(vector<int> &arr, vector<int> &result, int sNbr, int cnt)
{
    result[cnt] = sNbr;
    if(cnt == m - 1)
    {
        for (int i = 0; i < m; i++)
            cout << arr[result[i]] << ' ';
        cout << "\n";
        return;
    }
    for (int i = sNbr; i < n; i++)
        ft_bt(arr, result, i, cnt + 1);
}

int main()
{
    cin >> n >> m;
    int nbr;
    int cnt = 0;
    vector<int> arr;
    vector<int> result(m);
    vector<int> isIn(10001, 0);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> nbr;
        if(isIn[nbr])
            cnt++;
        else
        {
            isIn[nbr] = 1;
            arr.push_back(nbr);
        }
    }
    n -= cnt;    
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        ft_bt(arr, result, i, 0);
}