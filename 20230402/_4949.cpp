#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	string str;
	while(1)
	{
		int flag = 1;
		getline(cin, str);
		if(str[0] == '.')
			break;
		stack<char> stc;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				stc.push(str[i]);
			if (str[i] == ')')
			{
				if (!stc.empty() && stc.top() == '(')
					stc.pop();
				else
					flag = 0;
			}
			if (str[i] == ']')
			{
				if (!stc.empty() && stc.top() == '[')
					stc.pop();
				else
					flag = 0;
			}
		}
		if(stc.empty() && flag)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}