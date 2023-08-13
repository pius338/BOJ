#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n, m;
    vector<int> arr; 
    cin >> n;
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    sort(arr.begin(), arr.end());
    double s = floor(((double)n * 0.15) + 0.5);
    double t = 0;
    for (int i = s; i < n - s; i++)
        t += arr[i];
    t /= n - (2 * s);
    cout << floor(t + 0.5);
}