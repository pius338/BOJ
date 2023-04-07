#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, a_r, a_c;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a_r >> a_c;
        arr[a_r - 1][a_c - 1] = 2;
    }
    cin >> l;
    vector<pair<int, string>> l_arr(l);
    for (int i = 0; i < l; i++)
        cin >> l_arr[i].first >> l_arr[i].second;
    int direc = 0, flag = 0, time = 0;
    pair<int, int> cur = {0, 0};
    deque<pair<int, int>> snake;
    snake.push_back({cur.first, cur.second});
    for (int i = 0; i < l; i++)
    {
        if(flag)
            break;
        for (int j = l_arr[i].first - time; j > 0; j--)
        {
            time++;
            switch (direc)
            {
            case 0:
                cur.second++;
                break;
            case 1:
                cur.first++;
                break;
            case 2:
                cur.second--;
                break;
            case 3:
                cur.first--;
                break;
            }
            if((cur.first < 0 || cur.first >= n) || (cur.second < 0 || cur.second >= n))
                flag++;
            else if(arr[cur.first][cur.second] == 1)
                flag++;
            if(flag)
                break;
            if(arr[cur.first][cur.second] != 2)
            {
                arr[snake.back().first][snake.back().second] = 0;
                snake.pop_back();
            }
            snake.push_front({cur.first, cur.second});
            for (int k = 0; k < snake.size(); k++)
                arr[snake[k].first][snake[k].second] = 1;
        }
        if(l_arr[i].second == "D")
            direc++;
        else
            direc--;
        direc = (direc < 0) ? 3 : direc % 4;
    }
    while(!flag)
    {
         time++;
        switch (direc)
        {
            case 0:
                cur.second++;
                break;
            case 1:
                cur.first++;
                break;
            case 2:
                cur.second--;
                break;
            case 3:
                cur.first--;
        }
        if((cur.first < 0 || cur.first >= n) || (cur.second < 0 || cur.second >= n))
            flag++;
        else if(arr[cur.first][cur.second] == 1)
            flag++;
        if(flag)
            break;
        if(arr[cur.first][cur.second] != 2)
        {
            arr[snake.back().first][snake.back().second] = 0;
            snake.pop_back();
        }
        snake.push_front({cur.first, cur.second});
        for (int k = 0; k < snake.size(); k++)
            arr[snake[k].first][snake[k].second] = 1;
    }
    cout << time;
}