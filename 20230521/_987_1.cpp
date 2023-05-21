#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> arr(5, 0);
    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case 'M':
            arr[0]++;
            break;
        case 'O':
            arr[1]++;
            break;
        case 'B':
            arr[2]++;
            break;
        case 'I':
            arr[3]++;
            break;
        case 'S':
            arr[4]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
        if(arr[i])
            cnt++;
    if(cnt == 5)
        cout << "YES";
    else
        cout << "NO";
}