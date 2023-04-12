#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<long long> arr(91);
     for (int i = 1; i <= n; i++)
    {
        if(i <= 2)
            arr[i] = 1;
        if(i > 1)
            arr[i] = arr[i - 2]+ arr[i - 1];
    }
    cout << arr[n];
}