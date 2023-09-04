#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int a, b, result;
    vector<double> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    a = floor(arr[0] * arr[1] / arr[2]); 
    b = floor(arr[0] / arr[1] * arr[2]);
    result =  (a > b) ? a : b;
    cout << result;
}