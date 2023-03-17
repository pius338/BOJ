#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, a, b, result = 0;
    cin >> t >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        result += a * b;
    }
    if(t == result)
        cout << "Yes" <<'\n';
    else
        cout << "No" <<'\n';
}