#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, max, min = 0;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    max = *max_element(arr.begin(), arr.end());
    min = *min_element(arr.begin(), arr.end());
    cout << min << " " << max <<'\n';
}