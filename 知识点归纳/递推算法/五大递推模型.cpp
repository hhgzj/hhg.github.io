#include<iostream>
using namespace std;
int main1() {          // ģ��һ�� 쳲���������
	int a, b, c{};
	a = 0, b = 1;     // c = a + b;
	int n;
	cin >> n;
	cout << b << " ";
	for (int i = 2; i <= n; i++) {     // �ݹ�ģ��
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	cout << endl;
	return 0;
}
int main2() {    // ��ŵ������
	int n;
	cin >> n;
	unsigned long long h, h1, hn{};
	hn = h = h1 = 1;
	while (--n) {
		hn = 2 * h + 1;        // ���ƹ�ϵ��hn = 2 * h + 1
		h = hn;
	}
	cout << hn << endl;
	return 0;
}
int main3() {      // ƽ��ָ�����
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