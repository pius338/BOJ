#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, max, idx;
    vector<int> arr;
    for(int i = 0; i < 9; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    
    max = *max_element(arr.begin(), arr.end());
    idx = find(arr.begin(), arr.end(), max) - arr.begin();
    cout << max << '\n' << idx + 1 <<'\n';
}