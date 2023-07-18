#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, o;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> o;
        arr.push_back(m + o);
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << '\n';
}