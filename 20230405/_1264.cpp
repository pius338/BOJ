#include <bits/stdc++.h>
using namespace std;

int check(char c)
{
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return 1;
    return 0;
}

int main()
{
    string str;
    while(1)
    {
        int cnt = 0;
        getline(cin, str);
        if(str.size() == 1 && str[0] == '#')
            break;
        for (int i = 0; i < str.size(); i++)
            if(check(str[i]))
                cnt++;
        cout << cnt << '\n';
    }
}