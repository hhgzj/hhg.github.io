#include<iostream>
#include<vector>
using namespace std;
void bucket_sort(vector<int>& nums) {
	int n = nums.size();
	int num = *max_element(nums.begin(), nums.end());
	vector<int>rec(num+1);
	for (int i = 0; i < n; i++)rec[nums[i]]++;
	int t = 0;
	while (t <= num) {
		if (rec[t]-- > 0)cout << t << " ";
		else t++;
	}
	cout << endl;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)cin >> nums[i];
	bucket_sort(nums);
	return 0;
}