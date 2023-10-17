#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t = 0;
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        if (arr[i] - n < 0)
            t += (arr[i] - n) * -1;
    }
    cout << t;
}