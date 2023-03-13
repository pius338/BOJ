#include <iostream>
using namespace std;

int main()
{
    int t;
    int result = 0;
    cin >> t;
    for(int i = 1; i < t + 1; i++)
        result += i;
    cout << result << '\n';
}
