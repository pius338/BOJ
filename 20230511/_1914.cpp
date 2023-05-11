#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int src, int dest, int temp)
{
    if(n == 0)
        return ;
    else
    {
        hanoi(n - 1, src, temp, dest);
        cout << src << ' ' << dest << '\n';
        hanoi(n - 1, temp, dest, src);
    }
}

int main()
{
    int n;
    cin >> n;
    string str = to_string(pow(2, n));
    str = str.substr(0, str.find('.'));
    str[str.length() - 1]--;
    cout << str << '\n';
    if(n <= 20)
        hanoi(n, 1, 3, 2);
}