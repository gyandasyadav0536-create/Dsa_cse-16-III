#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

int sumNodes(Node* root) {
    if (root == NULL)
        return 0;

    return root->data +
           sumNodes(root->left) +
           sumNodes(root->right);
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};

    cout << "Sum of Nodes: " << sumNodes(root);

    return 0;
}