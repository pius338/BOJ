#include<iostream>
using namespace std;

int main(){
    string buf;
    while(1)
    {
        getline(cin, buf);
        if(buf == "END")
            break;
        for (int i = buf.size() - 1; i >= 0; i--)
            cout << buf[i];
        cout << "\n";
    }
}