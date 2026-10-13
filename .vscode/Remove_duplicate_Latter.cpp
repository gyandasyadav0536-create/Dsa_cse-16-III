#include <iostream>
#include <string>
#include <vector>
using namespace std;
string removeDuplicateLetters(string s) {
    vector<int> freq(26, 0); 
    vector<bool> inStack(26, false); 
    for (char c : s) freq[c - 'a']++;
    string result = "";
    for (char c : s) {
        freq[c - 'a']--; 
        if (inStack[c - 'a']) continue; 
        while (!result.empty() && result.back() > c && freq[result.back() - 'a'] > 0) {
            inStack[result.back() - 'a'] = false;
            result.pop_back();
        }

        result.push_back(c);
        inStack[c - 'a'] = true;
    }
    return result;
}

int main() {
    string s1 = "bcabc";
    string s2 = "cbacdcbc";
    cout << removeDuplicateLetters(s1) << endl; // Output: "abc"
    cout << removeDuplicateLetters(s2) << endl; // Output: "acdb"
    return 0;
}
