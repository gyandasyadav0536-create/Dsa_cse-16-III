#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();   
        } else {
            st.push(c); 
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result; 
        st.pop();
    }
  reverse(result.begin(), result.end());

    return result;
}

int main() {
    string s = "abbaca";
    cout << "Original: " << s << endl;
    cout << "After removing duplicates: " << removeDuplicate(s) << endl;
    return 0;
}
