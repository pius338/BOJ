#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<pair<int, int>> p_arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p_arr[i].first >> p_arr[i].second;
        arr[i] = p_arr[i].first + p_arr[i].second;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << "Case #" << i + 1 << ": " << p_arr[i].first << " + " << p_arr[i].second << " = " << arr[i] << '\n';
}