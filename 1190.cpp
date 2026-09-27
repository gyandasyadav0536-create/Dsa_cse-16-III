#include <bits/stdc++.h>
using namespace std;
string reverseParentheses(string s) {
    stack<string> st;
    string curr = "";
    for (char c : s) {
        if (c == '(') {
            st.push(curr);
            curr = "";
        } else if (c == ')') {
            reverse(curr.begin(), curr.end());
            curr = st.top() + curr;
            st.pop();
        } else {
            curr += c;
        }
    }
    return curr;
}
int main() {
    string s1 = "(abcd)";
    cout << reverseParentheses(s1) << endl; 
    string s2 = "(u(love)i)";
    cout << reverseParentheses(s2) << endl;
    return 0;
}
