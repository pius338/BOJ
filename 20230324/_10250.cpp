#include <iostream>
using namespace std;

int main()
{
    int t, h, w, n, cnt;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cnt = 1;
        cin >> h >> w >> n;
        if(n > h)
        {
            while(h < n)
            {
                n -=h;
                cnt++;
            }
        }
        cout << n * 100 + cnt << '\n';
    }
}
