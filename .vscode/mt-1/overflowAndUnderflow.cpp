#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int S[MAX];
int top = -1;
void push(int x) {
    if (top == MAX - 1)
        cout << "Overflow" << endl;
    else
        S[++top] = x;
}
void pop() {
    if (top == -1)
        cout << "Underflow" << endl;
    else
        cout << "Popped: " << S[top--] << endl;
}

void display() {
    cout << "Stack: ";
    for (int i = top; i >= 0; i--)
        cout << S[i] << " ";
    cout << endl;
}

int main() {
    push(10);
    push(20);
    pop();
    push(40);
    display();
    return 0;
}
