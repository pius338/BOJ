#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int t = arr[0] + arr[1] + arr[2] + arr[3];
    cout << t / 60 << "\n" << t % 60;
}