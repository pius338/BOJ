#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string str;
    vector<string> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        string res = (str.size() >= 6 && str.size() <= 9)? "yes" : "no";
        arr.push_back(res);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    
}