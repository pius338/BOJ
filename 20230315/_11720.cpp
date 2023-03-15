#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, result = 0;
    string str;
    cin >> n >> str;
    for(int i = 0; i < n; i++)
        result += str.at(i) - '0';
    cout << result << '\n';
}