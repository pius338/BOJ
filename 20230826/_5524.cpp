#include<iostream>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int j = 0; j < str.size(); j++)
            if(str[j] >= 'A' && str[j] <= 'Z')
                str[j] += 32;
        cout << str << "\n";
    }
}