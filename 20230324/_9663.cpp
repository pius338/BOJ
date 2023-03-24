#include <iostream>
#include <vector>
using namespace std;

int n, cnt;
vector<int> brd;

int ft_check(int low, int col)
{
    for (int i = 0; i < col; i++)
        if(brd[i] == low || abs(brd[i] - low) == col - i)
            return 0;
    return 1;
}

void mkboard(int low, int col)
{
    if(col == n)
    {
        cnt++;
        return ;
    }
    if(low < n)
    {
        if(ft_check(low, col))
        {
            brd[col] = low;
            mkboard(0, col + 1);
        }
        mkboard(low + 1, col);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        brd.push_back(-1);
    mkboard(0, 0);
    cout << cnt;
}