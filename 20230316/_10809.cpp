#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> arr(26, -1);
    for (int i = 0; i < str.size(); i++)
        if (arr[str.at(i) - 'a'] == -1)
            arr[str.at(i) - 'a'] = i;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ';
}