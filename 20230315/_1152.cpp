#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string str;
    getline(cin, str);
    if(str.size() > 1)
        count++;
	if(str.size() == 1 && str.at(0) != ' ')
		count++;
    for (int i = 0; i < str.size(); i++)
    {
        if(str.at(i) == ' ' && i != 0 && i != str.size() - 1)
            count++;
    }
    cout << count << '\n';
}