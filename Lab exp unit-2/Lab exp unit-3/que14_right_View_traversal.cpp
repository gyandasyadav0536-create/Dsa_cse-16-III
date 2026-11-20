#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};
void rightView(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();

        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();

            if (i == n - 1)
                cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};

    cout << "Right View: ";
    rightView(root);
    return 0;
}