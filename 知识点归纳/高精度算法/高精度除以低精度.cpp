#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {                      //    �߾���/�;���
	string s,ans;
	long long num;
	cout << "������������������";
	cin >> s >> num;
	cout << s << " / " << num << " = ";
	int n = s.size();
	int carry = 0;
	for (int i = 0; i < n; i++) {
		ans.push_back((carry * 10 + s[i] - '0') / num + '0');
		carry = (carry * 10 + s[i] - '0') % num;
	}
	int t = 0;
	while (t < n && ans[t] == '0')t++;
	while (t < n)cout << ans[t++];
	cout << "......" << carry << endl;    // carry Ϊ����
	return 0;
}