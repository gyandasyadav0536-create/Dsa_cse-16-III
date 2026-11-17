#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int countOneChild(Node* root) {
    if (root == NULL)
        return 0;

    int count = 0;

    if ((root->left == NULL && root->right != NULL) ||
        (root->left != NULL && root->right == NULL))
        count = 1;

    return count + countOneChild(root->left)
                 + countOneChild(root->right);
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->right->right = createNode(50);

    cout << "Nodes having 1 child: " << countOneChild(root);

    return 0;
}