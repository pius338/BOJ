#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, cnt = 0;
    string str;
    cin >> n;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(str == "ENTER")
            st.clear();
        else
        {
            if(st.find(str) == st.end())
            {
                st.insert(str);
                cnt++;
            }
        }
    }
    cout << cnt;
}
