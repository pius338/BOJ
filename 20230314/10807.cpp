#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, minsik, v, count = 0;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> minsik;
        arr.push_back(minsik);
    }
    cin >> v;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == v)
            count++;
    }  
    cout << count <<'\n';
}