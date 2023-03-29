#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nb, n, m, p, o;
    cin >> nb;
    
    vector<int> r_arr;
    for (int i = 0; i < nb ; i++)
    {
        int cnt = 0;
        cin >> n >> m;
        deque<pair<int, int>> deq;
        vector<int> arr;
        for (int j = 0; j < n; j++)
        {
            cin >> o;
            deq.push_back({j, o});
            arr.push_back(o);
        }
        sort(arr.begin(), arr.end(), greater<>());
        for (int k = 0; k < n; k++)
        {
            
            while(deq.front().second != arr[k])
            {
                deq.push_back(deq.front());
                deq.pop_front();
            }
            if(deq.front().first == m)
                r_arr.push_back(k + 1);
            deq.pop_front();
        }
    }
    for (int i = 0; i < r_arr.size(); i++)
            cout << r_arr[i] << '\n';
}