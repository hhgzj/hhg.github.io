#include<iostream>
#include<vector>
using namespace std;
void shell_sort(vector<int>& nums) {
	int n = nums.size();
	int gap, temp, i, j;
	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			temp = nums[i];
			j = i;
			while (j >= gap && nums[j - gap]> temp) {
				nums[j] = nums[j - gap];
				j -= gap;
			}
			nums[j] = temp;
		}
	}
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)cin >> nums[i];
	shell_sort(nums);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}