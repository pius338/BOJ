#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n >= 12 && n <= 16 && !m)
        cout << "320";
    else
        cout << "280";
}