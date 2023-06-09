#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
const int N = 1e5;
int nums[N];
void quick_sort(int nums[], int l, int r) {   // �����������ηָ�����
	int mid = nums[l];                // midΪ�ָ���
	int i, j;
	i = l, j = r;
	while (i <= j) {                 // ʹmid���ȫ��С��mid���ұ�ȫ������mid
		while (nums[i] < mid)i++;    // ������Ҵ���mid����
		while (nums[j] > mid)j--;    // ���ұ���С��mid����
		if (i <= j) {                // �������mid��������ߣ�С��mid�������ұߣ��򽻻���ֵ
			swap(nums[i], nums[j]);
			i++, j--;
		}
	}
	if (l < j)quick_sort(nums, l, j);    // �ݹ������������
	if (i < r)quick_sort(nums, i, r);    // �ݹ������������
}
int main() {
	int n;
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)nums[i] = rand() % 101;      // rand()%(b-a+1)+a  ����[a,b]
	quick_sort(nums, 0, n - 1);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}