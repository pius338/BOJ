#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " << arr[i] << '\n';
}