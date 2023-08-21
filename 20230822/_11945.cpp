#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    vector<string> arr(10);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << arr[i][m - j];
        cout << "\n";
    }
}