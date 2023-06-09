#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {                      // 高精度加法
	string s1, s2, s;
	cout << "请输入两个正整数：";
	cin >> s1 >> s2;
	cout << s1 << "+" << s2;
	int carry = 0;
	int n1 = s1.size();
	int n2 = s2.size();
	int n = max(n1, n2);
	int i = 0;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	while (i < n) {
		if (i < n1)carry += s1[i] - '0';
		if (i < n2)carry += s2[i] - '0';
		s.push_back(carry % 10 + '0');
		carry /= 10;
		i++;
	}
	if (carry > 0)s.push_back(carry % 10 + '0');
	reverse(s.begin(), s.end());
	cout << "=" << s << endl;
	return 0;
}