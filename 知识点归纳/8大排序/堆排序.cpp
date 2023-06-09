#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
const int N = 1e5 + 1;
vector<int>nums(N);
void heap_sort(vector<int>& nums, int n) {        // ¶ÑÅÅÐò
	
}
int main() {
	int n;
	cin >> n;
	srand(time(0));
	for (int i = 0; i < n; i++)nums[i] = rand() % 101;      // rand()%(b-a+1)+a  Çø¼ä[a,b]
	heap_sort(nums, n);
	for (int i = 0; i < n; i++)cout << nums[i] << " ";
	cout << endl;
	return 0;
}