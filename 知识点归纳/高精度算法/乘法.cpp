#include<iostream>
#include<vector>
#include<algorithm>
#include<string>					 
using namespace std;
int main() {                    // 高精度乘法
	string s1, s2;
	cout << "请输入两个正整数：";
	cin >> s1 >> s2;
	cout << s1 << " * " << s2;
	int carry = 0;
	int n1 = s1.size();
	int n2 = s2.size();
	int n = max(n1, n2);
	vector<int>nums(n1 + n2);
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			carry += (s1[i] - '0') * (s2[j] - '0');
			nums[i + j] += carry % 10;
			carry = carry / 10 + nums[i + j] / 10;
			nums[i + j] %= 10;
		}
		nums[i + n2] += carry % 10;
		carry = carry / 10 + nums[i + n2] / 10;
		nums[i + n2] %= 10;
	}
	if (carry > 0) nums[n1 + n2 - 1] = carry % 10;
	int t = n1 + n2;
	while (t > 1 && nums[t - 1] == 0)t--;
	nums.resize(t);
	reverse(nums.begin(), nums.end());
	cout << " = ";
	for (int i = 0; i < t; i++)cout << nums[i];
	cout << endl;
	return 0;
}