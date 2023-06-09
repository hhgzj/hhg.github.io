#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
const int N = 1e5;
int nums[N];
void quick_sort(int nums[], int l, int r) {   // 快速排序：依次分隔排序
	int mid = nums[l];                // mid为分隔数
	int i, j;
	i = l, j = r;
	while (i <= j) {                 // 使mid左边全都小于mid，右边全都大于mid
		while (nums[i] < mid)i++;    // 在左边找大于mid的数
		while (nums[j] > mid)j--;    // 在右边找小于mid的数
		if (i <= j) {                // 如果大于mid的数在左边，小于mid的数在右边，则交换数值
			swap(nums[i], nums[j]);
			i++, j--;
		}
	}
	if (l < j)quick_sort(nums, l, j);    // 递归分左区间排序
	if (i < r)quick_sort(nums, i, r);    // 递归分右区间排序
}
int main() {
	int n;
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)nums[i] = rand() % 101;      // rand()%(b-a+1)+a  区间[a,b]
	quick_sort(nums, 0, n - 1);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}