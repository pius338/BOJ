#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int minsik, count = 0;
    vector<int> arr;
    vector<int> r_arr(30, 0);
    for(int i = 0; i < 28; i++)
    {
        cin >> minsik;
        arr.push_back(minsik);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 28; i++)
        r_arr[arr[i] - 1] = arr[i];
    for(int i = 0; i < 30; i++)
    {
        if(r_arr[i] == 0)
            cout << i + 1 << '\n';
    }
}