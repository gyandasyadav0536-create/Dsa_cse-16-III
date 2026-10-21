//container most water
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxWater = max(maxWater, h * w);

            // Move the pointer at the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};

int main() {
    // Example input
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    Solution sol;
    int result = sol.maxArea(height);

    cout << "Maximum water container area: " << result << endl;

    return 0;
}
