#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
        if(!((i + 1) % 10))
            cout << '\n';
    }
}