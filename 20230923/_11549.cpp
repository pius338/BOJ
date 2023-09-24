#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m = 0;
    vector<int> arr(5);
    cin >> n;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == n)
            m++;
    }
    cout << m;
}