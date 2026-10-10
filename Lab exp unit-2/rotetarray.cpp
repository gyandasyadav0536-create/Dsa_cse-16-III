//Suppose an array of length n sorted in ascending order is rotated between 1 and n times
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,4,5,1,2};   // Example input
    cout << "Minimum element: " << sol.findMin(nums) << endl;
    return 0;
}
