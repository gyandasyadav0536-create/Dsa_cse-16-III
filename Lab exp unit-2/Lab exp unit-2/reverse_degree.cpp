#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            // reversed alphabet value: 'a' = 26, 'z' = 1
            int rev_val = 26 - (s[i] - 'a');
            int index = i + 1; // 1-indexed
            total += rev_val * index;
        }
        return total;
    }
};
