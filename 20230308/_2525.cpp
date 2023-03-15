#include <iostream>
using namespace std;

int main()
{
    int t_now, m_now, c_time;
    cin >> t_now >> m_now;
    cin >> c_time;

    m_now += c_time;
    while(m_now >= 60)
    {
        m_now -= 60;
        if(t_now == 23)
            t_now -= 23;
        else
            t_now++;
    }
    cout << t_now << " " << m_now << '\n';
}