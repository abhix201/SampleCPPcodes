#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	int sum = arr[0], lower = 1, ans = INT_MIN;
	while (lower < n)
	{
		sum += arr[lower];
		ans = max(ans, sum);
		sum = arr[lower];
		lower++;

	}
	cout << ans << endl;
	return 0;
}