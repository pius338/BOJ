#include <iostream>
using namespace std;

int r_num(int n)
{
    if(n == 0)
        return (1);
    return (r_num(n - 1) + (6 * n));
}

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while(r_num(i) < n)
        i++;
    cout << i + 1;
}