#include<iostream>
#include<vector>
using namespace std;
void select_sort(vector<int>& nums) {
	int n = nums.size();
	int temp, i, j;
	for (i = 1; i < n; i++) {
		temp = nums[i];
		j = i;
		while (j > 0 && nums[j - 1] > temp) {
			nums[j] = nums[j - 1];
			j--;
		}
		nums[j] = temp;
	}
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)cin >> nums[i];
	select_sort(nums);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}