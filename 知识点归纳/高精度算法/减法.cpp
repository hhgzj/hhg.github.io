#include<iostream>
#include<vector>
#include<algorithm>
#include<string>					 // 包含stoi()函数
using namespace std;
int main() {                         // 高精度减法
	string s1, s2, s;
	cout << "请输入两个正整数：";
	cin >> s1 >> s2;
	cout << s1 << "-" << s2;
	string c;
	int n1 = s1.size();
	int n2 = s2.size();
	if (n1 < n2 || n1 == n2 && s1 < s2) {
		swap(s1, s2);
		swap(n1, n2);
		c = "-";
	}
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int i = 0;
	while (i < n1) {
		if (i < n2) {
			if (s1[i] >= s2[i])s.push_back(s1[i] - s2[i] + '0');
			else {
				s.push_back(s1[i] + 10 - s2[i] + '0');
				int j = i + 1;
				while (j < n1 && s1[j] == '0')s1[j++] = '9';
				s1[j]--;
			}
		}
		else s.push_back(s1[i]);
		i++;
	}
	while (i > 1 && s[i - 1] == '0')i--;
	s.resize(i);
	reverse(s.begin(), s.end());
	s.insert(0, c);
	cout << "=" << s << endl;
	return 0;
}