#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    n *= m;
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int i = 0; i < 5; i++)
        cout << arr[i] - n << ' ';
}