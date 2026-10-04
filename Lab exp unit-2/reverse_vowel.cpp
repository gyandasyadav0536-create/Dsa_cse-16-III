#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (vowels.find(s[left]) == vowels.end()) {
                left++;
            } else if (vowels.find(s[right]) == vowels.end()) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;

    string s1 = "IceCreAm";
    string s2 = "leetcode";

    cout << "Input: " << s1 << "\nOutput: " << sol.reverseVowels(s1) << endl;
    cout << "Input: " << s2 << "\nOutput: " << sol.reverseVowels(s2) << endl;

    return 0;
}

