#include <iostream>
using namespace std;

int main()
{
    int t, m, res_t;
    cin >> t >> m;

    res_t = 0;
    m += t * 60;
    m -= 45;
    
    if(m < 0)
    {
        res_t = 23;
        m += 60;
    }
    while(m >= 60)
    {
        m -= 60;
        res_t++;
    }
    cout << res_t << " " << m << '\n';
}