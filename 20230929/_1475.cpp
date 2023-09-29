#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    float sn;
    string str;
    vector<float> arr(10, 0);
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - '0']++;
    }
    sn = ceil((arr[6] + arr[9]) / 2);
    arr[6] = sn; arr[9] = sn;
    cout << *max_element(arr.begin(), arr.end());
}