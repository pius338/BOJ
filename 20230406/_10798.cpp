#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    vector<string> arr(5, "***************");
    vector<char> r_arr;
    for (int i = 0; i < 5; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
            arr[i][j] = str[j];
    }
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            if(arr[j][i] != '*')
                r_arr.push_back(arr[j][i]);
    for (int i = 0; i < r_arr.size(); i++)
        cout << r_arr[i];  
}