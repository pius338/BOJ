#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    vector<int> arr(42, 0);
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n % 42]++;
    }
    for (int i = 0; i < 42; i++)
        if(arr[i])
            count++;
    
    cout << count << '\n';
}