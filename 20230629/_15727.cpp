#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    while(n > 5)
    {
        n -= 5;
        cnt++;
    }
    cout << cnt;
}