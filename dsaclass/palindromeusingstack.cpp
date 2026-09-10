
#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(int num) {
    // Negative numbers are not palindromes
    if (num < 0) return false;

    stack<int> st;
    int temp = num;

    // Push digits into stack
    while (temp > 0) {
        st.push(temp % 10);
        temp /= 10;
    }

    temp = num;
    int reversed = 0;

    // Pop digits to form reversed number
    while (!st.empty()) {
        reversed = reversed * 10 + st.top();
        st.pop();
    }

    // Compare original and reversed
    return num == reversed;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isPalindrome(x))
        cout << x << " is a palindrome." << endl;
    else
        cout << x << " is not a palindrome." << endl;

    return 0;
}
