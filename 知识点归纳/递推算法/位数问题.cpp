#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1e5 + 1;
int nums[N][2];
int main() {
	int n;
	cin >> n;
	nums[1][0] = 9;
	nums[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		int x = 9;
		if (i == n)x--;
		nums[i][0] = (nums[i - 1][0] * x + nums[i - 1][1]) % 12345;
		nums[i][1] = (nums[i - 1][0] + nums[i - 1][1] * x) % 12345;
	}
	cout << nums[n][0] << " " << nums[n][1] << endl;
	return 0;
}