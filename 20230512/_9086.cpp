#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        cout << str[0] << str[str.size() - 1] << '\n';
    }
}