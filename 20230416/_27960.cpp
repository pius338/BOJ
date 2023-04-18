#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, m, c = 0, score = 512;
    cin >> n >> m;
    vector<int> narr(10, 0);
    vector<int> marr(10, 0);
    for (int i = 0; i < 10; i++)
    {
        if(n >= score)
        {
            narr[9 - i]++;
            n -= score;       
        }

        if(m >= score)
        {
            marr[9 - i]++;
            m -= score;       
        }
        score /= 2;
    }
    for (int i = 0; i < 10; i++)
        if((narr[i] && !marr[i]) || (!narr[i] && marr[i]))
            c += pow(2, i);
    cout << c;
}