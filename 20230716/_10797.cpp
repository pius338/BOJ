#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    vector<int> arr(10, 0);
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> m;
        arr[m]++;
    }
    cout << arr[n];
}