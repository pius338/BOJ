#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t = 0;
    vector<int> arr(3);
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        t += (arr[i] > n) ? n : arr[i];
    }
    cout << t;
}