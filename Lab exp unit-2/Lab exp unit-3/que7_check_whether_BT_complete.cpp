#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

bool isComplete(Node* root) {
    if (root == NULL)
        return true;

    queue<Node*> q;
    q.push(root);

    bool flag = false;

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->left) {
            if (flag)
                return false;

            q.push(temp->left);
        }
        else
            flag = true;

        if (temp->right) {
            if (flag)
                return false;

            q.push(temp->right);
        }
        else
            flag = true;
    }

    return true;
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    if (isComplete(root))
        cout << "Complete Binary Tree";
    else
        cout << "Not a Complete Binary Tree";

    return 0;
}