#include<iostream>
using namespace std;
int main1() {          // 模型一： 斐波那契数列
	int a, b, c{};
	a = 0, b = 1;     // c = a + b;
	int n;
	cin >> n;
	cout << b << " ";
	for (int i = 2; i <= n; i++) {     // 递归模版
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	cout << endl;
	return 0;
}
int main2() {    // 汉诺塔问题
	int n;
	cin >> n;
	unsigned long long h, h1, hn{};
	hn = h = h1 = 1;
	while (--n) {
		hn = 2 * h + 1;        // 递推关系：hn = 2 * h + 1
		h = hn;
	}
	cout << hn << endl;
	return 0;
}
int main3() {      // 平面分隔问题
	int n;
	cin >> n;
	int a1, a2;
	a1 = a2 = 1;
	for (int i = 2; i <= n; i++) {
		a2 = a1 + 2 * (i - 1);
		a1 = a2;
	}
	cout << a2 << endl;
	return 0;
}