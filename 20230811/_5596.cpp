#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, t;
    cin >> a >> b >> c >> d;
    t = a + b + c + d;
    cin >> a >> b >> c >> d;
    if(t >= a + b + c + d)
        cout << t;
    else
        cout << a + b + c + d;
}