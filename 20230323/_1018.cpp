#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, b_cnt, w_cnt;
	string str, sub_str;
	vector<string> b_brd(8, "BWBWBWBW");
	vector<string> w_brd(8, "WBWBWBWB");
	vector<string> i_brd(n);
	vector<string> sub_brd(8);
	vector<int> cntarr;

	cin >> n >> m;
	for (int i = 0; i < 8; i++)
	{
		if(i % 2)
		{
			b_brd[i] = "WBWBWBWB";
			w_brd[i] = "BWBWBWBW";
		}
	}
	for (int i = 0; i < n; i++)
		cin >> i_brd[i];
	for (int i = 0; i + 8 <= n; i++)
	{
		for (int j = 0; j + 8 <= m; j++)
		{
			b_cnt = w_cnt = 0;
			for (int k = 0; k < 8; k++)
				sub_brd[k] = i_brd[k + i].substr(j, 8);
			for (int l = 0; l < 8; l++)
			{
				for (int o = 0; o < 8; o++)
				{
					if (sub_brd[l][o] != b_brd[l][o])
						b_cnt++;
					if (sub_brd[l][o] != w_brd[l][o])
						w_cnt++;
				}
			}
			cntarr.push_back(b_cnt);
			cntarr.push_back(w_cnt);
		}
	}
	sort(cntarr.begin(), cntarr.end());
	cout << cntarr[0];
}