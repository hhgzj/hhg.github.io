#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>& nums) {
	int n = nums.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] > nums[j])swap(nums[i], nums[j]);
		}
	}
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)cin >> nums[i];
	bubble_sort(nums);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}