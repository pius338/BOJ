#include <iostream>
#include <string>
using namespace std;

int main()
{
    int flag;
    string str;
    while(1)
    {
        flag = 0;
        cin >> str;
        if(str[0] == '0')
            break;
        for (int i = 0; i < str.size() / 2; i++)
            if(str[i] != str[str.size() - 1 - i])
                flag++;
        if(flag)
            cout << "no" <<'\n';
        else
            cout << "yes" << '\n';
    }
}