include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(sum - target) < abs(closest - target)) {
                closest = sum;
            }

            if (sum < target) {
                left++;
            }
            else if (sum > target) {
                right--;
            }
            else {
                cout << sum << endl;
                return 0;
            }
        }
    }

    cout << closest << endl;
    return 0;
}