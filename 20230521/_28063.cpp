#include <iostream>
using namespace std;

int main()
{
    int n, x, y, result = 4;
    cin >> n >> x >> y;
    if(x == 1)
        result--;
    if(x == n)
        result--;
    if(y == 1)
        result--;
    if(y == n)
        result--;
    cout << result;
}