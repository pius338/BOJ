#include <iostream>
using namespace std;

int main()
{
    int n, m, cur = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cur += m;
    }
    if(cur)
    {
        if(cur < 0)
            cout << "Left";
        else
            cout << "Right";
    }
    else
        cout << "Stay";
}