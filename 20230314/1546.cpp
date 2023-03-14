#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    double n, max_n, sum = 0;
    cin >> n;
    vector<double> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    max_n = *max_element(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        sum += (arr[i] / max_n) * 100;
    }
    cout << sum / n <<'\n';
    
}