#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
const int N = 1e5 + 1;
int nums[N];
int rec[N];
void merge_sort(int nums[], int l, int r) {    // �鲢�����ȷ����������ź�����ٺϲ���������
	if (l == r)return;
	int mid = (l + r) / 2;
	merge_sort(nums, l, mid);         // ������
	merge_sort(nums, mid + 1, r);     // ������
	int i = l, j = mid + 1, k = l;
	while (i <= mid && j <= r) {
		if (nums[i] < nums[j]) {
			rec[k] = nums[i];
			k++, i++;
		}
		else {
			rec[k] = nums[j];
			k++, j++;
		}
	}
	while (i <= mid) {
		rec[k] = nums[i];
		k++, i++;
	}
	while (j <= r) {
		rec[k] = nums[j];
		k++, j++;
	}
	for (int i = l; i < k; i++)nums[i] = rec[i];
}
int main() {
	int n;
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)nums[i] = rand() % 101;      // rand()%(b-a+1)+a  ����[a,b]
	merge_sort(nums, 0, n - 1);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}