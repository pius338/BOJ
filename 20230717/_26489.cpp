#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    string str;
    while(!(cin >> str).eof())
        if(str == "for")
            cnt++;
    cout << cnt;
}