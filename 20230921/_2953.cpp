#include<iostream>
using namespace std;

int main()
{
    int n, m, max = 0, max_i;
    for (int i = 1; i <= 5; i++)
    {
        m = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> n;
            m += n;
        }
        if(m > max)
        {
            max = m;
            max_i = i;
        }
    }
    cout << max_i << ' ' << max;
}