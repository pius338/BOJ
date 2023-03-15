#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x, n, minsik;

    cin >> n >> x;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> minsik;
        arr.push_back(minsik);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < x)
            cout << arr[i] << " ";
    }  
    
}