#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int res = (a >= b) ? (a == b) ? 0 : 1 : -1; 
    cout << res;
}