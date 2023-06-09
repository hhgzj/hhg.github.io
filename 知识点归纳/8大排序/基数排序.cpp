#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
const int N = 1e5 + 1;
vector<int>nums(N);
void count_sort(vector<int>& nums, int n, int exp) {        // 进制位排序
	vector<int>rec(n);
	int buckets[10] = { 0 };
	for (int i = 0; i < n; i++) {
		buckets[nums[i] / exp % 10]++;
	}
	for (int i = 1; i < 10; i++) {
		buckets[i] += buckets[i - 1];
	}
	for (int i = n - 1; i >= 0; i--) {      // i=n-1 从后往前排 主要是因为后面的元素按进制位排序比前面的大
		rec[buckets[nums[i] / exp % 10] - 1] = nums[i];
		buckets[nums[i] / exp % 10]--;
	}
	for (int i = 0; i < n; i++) {
		nums[i] = rec[i];
	}
}
void radix_sort(vector<int>& nums, int n) {      // 基数排序
	int maxnum = *max_element(nums.begin(), nums.end());
	for (int exp = 1; maxnum / exp > 0; exp *= 10) {
		count_sort(nums, n, exp);
	}
}
int main() {
	int n;
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)nums[i] = rand() % 101;      // rand()%(b-a+1)+a  区间[a,b]
	radix_sort(nums, n);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}