#include <iostream>
#include <vector>
using namespace std;

int count = 0;

void hanoi(int n, int src, int dest, int temp, vector<pair<int, int >> &arr)
{
    if(n == 0)
        return ;
    else
    {
        hanoi(n - 1, src, temp, dest, arr);
        arr.push_back(make_pair(src, dest));
        count++;
        hanoi(n - 1, temp, dest, src, arr);
    }
    
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int >> arr;
    hanoi(n, 1, 3, 2, arr);
    cout << count << '\n';
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i].first << ' ' << arr[i].second << '\n';  
}