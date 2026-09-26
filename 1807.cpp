#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        // Step 1: Build dictionary
        unordered_map<string, string> dict;
        for (auto &pair : knowledge) {
            dict[pair[0]] = pair[1];
        }
        string result;
        string key;
        bool insideBracket = false;
        
        // Step 2: Iterate through string
        for (char c : s) {
            if (c == '(') {
                insideBracket = true;
                key.clear();
            } else if (c == ')') {
                insideBracket = false;
                if (dict.find(key) != dict.end()) {
                    result += dict[key];
                } else {
                    result += "?";
                }
            } else {
                if (insideBracket) {
                    key += c;
                } else {
                    result += c;
                }
            }
        }
        
        return result;
    }
};
