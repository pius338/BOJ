#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    vector<int> arr(2, 0);
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        for (int j = 0; j < 3; j++)
        {
            arr[i] += (n % 10) * pow(10, 2 - j);
            n /= 10;   
        }
    }
    if(arr[0] > arr[1])
        cout << arr[0] << '\n';
    else
        cout << arr[1] << '\n';
}