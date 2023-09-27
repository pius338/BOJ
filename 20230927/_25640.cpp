#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m = 0;
    string str;
    vector<string> arr(100);
    cin >> str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(str == arr[i])
            m++;
    }
    cout << m;
}