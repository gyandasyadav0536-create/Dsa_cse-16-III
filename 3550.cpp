#include <bits/stdc++.h>   
using namespace std;
int digitSum(int nums) {
    int sum = 0;
    while (nums > 0) {
        sum += nums % 10;
        nums /= 10;
    }
    return sum;
}

int smallestIndex(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (digitSum(nums[i]) == i) {
            return i;   
        }
    }
    return -1;      
}

int main() {
    vector<int> nums1 = {1,3,2};
    cout << smallestIndex(nums1) << endl;  
    return 0;
}
