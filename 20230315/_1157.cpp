#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	int count, max_idx, max = 0;
	cin >> str;
	vector<int> alphabet(26, 0);
	vector<int> result;
	for (int i = 0; i < str.size(); i++)
		if(str.at(i) >= 65 && str.at(i) <= 90)
			str.at(i) += 32;
	for (int i = 0; i < str.size(); i++)
		alphabet[str.at(i) - 'a']++;
	for	(int i = 0; i < 26; i++)
	{
		if(alphabet[i] > max)
		{
			max = alphabet[i];
			max_idx = i;
		}
	}
	sort(alphabet.begin(), alphabet.end());
	for	(int i = 0; i < 25; i++)
	{
		if(alphabet[i] == max)
		{
			cout << "?" << '\n';
			return (0);
		}
	}
	cout << char(max_idx + 'A') << '\n';
}