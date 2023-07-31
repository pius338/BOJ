#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    if(arr[0] + arr[1] + arr[2] != 180)
        cout << "Error";
    else
    {
        if(arr[0] == arr[1] || arr[1] == arr[2])
        {
            if(arr[1] == arr[2] && arr[0] == arr[1])
                cout << "Equilateral";
            else
                cout << "Isosceles";
        }
        else
            cout << "Scalene";
    }
}