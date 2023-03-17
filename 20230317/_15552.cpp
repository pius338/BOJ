#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[i] = a + b;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
}