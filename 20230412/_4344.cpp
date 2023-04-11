#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	double n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double  s, total = 0;
		cin >> m;
		vector<double> arr;
		for (int j = 0; j < m; j++)
		{
			cin >> s;
			arr.push_back(s);
			total += s;
		}
		double mean = total / m, num = 0;
		for (int k = 0; k < arr.size(); k++)
			if(arr[k] > mean)
				num++;
		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << round((num / m) * 100000) / 1000 << '%' << '\n';
	}
}