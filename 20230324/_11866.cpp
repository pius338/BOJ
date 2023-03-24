#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k,i_cnt = 0, cnt = 0;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> r_arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        arr[i - 1] = i;
    int i = 0;
    while (1)
    {
        if(cnt == n * k)
            break;
        if(i == n)
        {
            cout << 'a';
            i = 0;
        }
        if(i_cnt == 2)
        {
            if(r_arr[arr[i]] == 0)
            {
                i_cnt = 0;
                r_arr[arr[i]]++;
                cout << arr[i] << ' ';
            }
            i++;
        }
        else
        {
            i++;
            i_cnt++;
        }
    }
    
}
