#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, size, flag = 0, t_l = 0, t_w = 0;
    vector<int> arr(6);
    deque<int> que;
    cin >> n;
    for (int i = 0; i < 6; i++)
    {
        cin >> m >> l;
        que.push_back(m);
        arr[i] = l;
        if(m == 1)
            t_w += l;
        if(m == 3)
            t_l += l;

    }
    int x, fst, sec;
    int i = 0;
    while(1)
    {
        x = que[0];
        que.push_back(que[0]);
        if(x == que[2] && flag)
        {
            if(que[1] == que[3])
                fst = (i + 2 > 5) ? (i + 2) % 6 : i + 2;
            else
                fst = (i > 5) ? i % 6 : i;
            break;
        }
        if(x == que[2])
        {
            if(que[1] != que[3])
                sec = (i > 5) ? i % 6 : i;
            else
                sec = (i + 2 > 5) ? (i + 2) % 6 : i + 2;
            flag++;
        }
        que.pop_front();
        i++;
    }
    size = (t_w * t_l) - (arr[fst] * arr[sec]);
    cout << size * n;
}