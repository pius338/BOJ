#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n > m) n = (24 + m) - n;
    else n = m - n;
    cout << n;
}