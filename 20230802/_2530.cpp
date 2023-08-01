#include<iostream>
using namespace std;

int main(){
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    if (t / 3600)
    {
        h += t / 3600;
        t %= 3600;
    }
    if (t / 60)
    {
        m += t / 60;
        t %= 60;
    }
    s += t;
    while (s >= 60)
    {
        s -= 60;
        m++;
    }
    while (m >= 60)
    {
        m -= 60;
        h++;
    }
    while (h >= 24)
        h -= 24;
    cout << h << " " << m << " " << s;
}