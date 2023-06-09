#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int compare(string a, string b) {       // 比较两个两个数的大小
	int alen = a.size();
	int blen = b.size();
	if (alen > blen)return 1;
	else if (alen < blen)return -1;
	else {
		if (a > b)return 1;
		else if (a == b)return 0;
		else return -1;
	}
}
void jian(string& a, string b) {         // 被除数减除数
	int alen = a.size();
	int blen = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int i, j;
	i = j = 0;
	while (j < blen) {
		if (a[i] >= b[j]) {
			a[i] = a[i] - b[j] + '0';
		}
		else {
			a[i + 1]--;
			a[i] += 10;
			a[i] = a[i] - b[j] + '0';
		}
		i++, j++;
	}
	while (alen > 1 && a[alen - 1] == '0')alen--;
	a.resize(alen);
	reverse(a.begin(), a.end());
}
//          修改a和c需要添加取地址符 "&"
void chugao(string& a, string b, string& c) {        // 用减法模拟除法
	int alen = a.size();
	int blen = b.size();
	int clen = alen - blen + 1;
	for (int i = 0; i < clen; i++)c += "0";
	for (int i = clen - 1; i >= 0; i--) {
		string temp = b;
		for (int j = 0; j < i; j++) {
			temp += "0";
		}
		while (compare(a, temp) >= 0) {        
			c[i]++;
			jian(a, temp);
		}
	}
	while (clen > 1 && c[clen - 1] == '0')clen--;
	c.resize(clen);
	reverse(c.begin(), c.end());
}
void print(string s) {                  // 打印数据
	for (int i = 0; i < s.size(); i++)
		cout << s[i];
}
int main() {                      //    高精度/高精度
	string a, b, c;
	cin >> a >> b;
	if (compare(a, b) < 0) {
		cout << 0 << "......"; print(a);
		cout << endl;
	}
	else if (compare(a, b) == 0) {
		cout << 0 << "......" << 0 << endl;
	}
	else {
		chugao(a, b, c);
		print(c); cout << "......"; print(a);
		cout << endl;
	}
	return 0;
}