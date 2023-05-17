#include <iostream>
#include <vector>
using namespace std;

int n, m;

void ft_bt(vector<int> &result, int sNbr, int cnt)
{
    result[cnt] = sNbr;
    if(cnt == m - 1)
    {
        for (int i = 0; i < m; i++)
            cout << result[i] << ' ';
        cout << "\n";
        return;
    }
    for (int i = sNbr + 1; i < n + 1; i++)
        ft_bt(result, i, cnt + 1);
}

int main()
{
    cin >> n >> m;
    vector<int> result(m);
    for (int i = 1; i <= n - m + 1; i++)
        ft_bt(result, i, 0);
}