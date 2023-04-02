#include <iostream>
#include <stack>
using namespace std;

int main() 
{
	int n, m, result = 0;
	stack<int> stc;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if(m)
			stc.push(m);
		else
			if(!stc.empty())
				stc.pop();
	}
	while (!stc.empty())
	{
		result += stc.top();
		stc.pop();
	}
	cout << result;
}