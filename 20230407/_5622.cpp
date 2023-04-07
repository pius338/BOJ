#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string str;
    cin >> str;
    vector<int> arr;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] < 'A')
            arr.push_back(1);
        if(str[i] >= 'A' && str[i] <= 'C')
            arr.push_back(2);
        if(str[i] >= 'D' && str[i] <= 'F')
            arr.push_back(3);
        if(str[i] >= 'G' && str[i] <= 'I')
            arr.push_back(4);
        if(str[i] >= 'J' && str[i] <= 'L')
            arr.push_back(5);
        if(str[i] >= 'M' && str[i] <= 'O')
            arr.push_back(6);
        if(str[i] >= 'P' && str[i] <= 'S')
            arr.push_back(7);
        if(str[i] >= 'T' && str[i] <= 'V')
            arr.push_back(8);
        if(str[i] >= 'W' && str[i] <= 'Z')
            arr.push_back(9);
    }
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i] + 1;
    cout << sum;
}