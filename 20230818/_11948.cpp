#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a, b, t = 0;
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 1; i < 4; i++)
        t += arr[i];
    cin >> a >> b;
    t += (a > b)? a : b;
    cout << t;
}