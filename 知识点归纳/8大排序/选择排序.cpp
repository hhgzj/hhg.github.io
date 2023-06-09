#include<iostream>
#include<vector>
using namespace std;
void elect_sort(vector<int>& nums) {
	int n = nums.size();
	for (int i = 0; i < n - 1; i++) {
		int t = i;
		for (int j = i + 1; j < n; j++) {
			if (nums[t] > nums[j])t = j;
		}
		swap(nums[i], nums[t]);
	}
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)cin >> nums[i];
	elect_sort(nums);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}