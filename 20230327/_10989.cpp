#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n, m;
    cin >> n;
    vector<int> arr(10001, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr[m]++;
    }
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << '\n';
}