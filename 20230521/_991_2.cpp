#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> sumArr;

void ft_bt(vector<int> &arr, vector<int> &result, int sNbr, int cnt)
{
    result[cnt] = sNbr;
    if(cnt == m - 1)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
            sum += arr[result[i]];
        if(!(sum % 2))
            sumArr.push_back(sum);
        return;
    }
    for (int i = sNbr + 1; i < n + 1; i++)
        ft_bt(arr, result, i, cnt + 1);
}

int main()
{
    cin >> n;
    vector<int> arr(n + 1);
   
    for (int i = 1; i < n + 1; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    m = 0;
    for (int j = 0; j < n; j++)
    {
        m++;
        vector<int> result(m);
        for (int i = 1; i <= n; i++)
            ft_bt(arr, result, i, 0);
    }
    if(sumArr.empty())
    {
        cout << '0';
        return 0;
    }
    cout << *max_element(sumArr.begin(), sumArr.end());
}