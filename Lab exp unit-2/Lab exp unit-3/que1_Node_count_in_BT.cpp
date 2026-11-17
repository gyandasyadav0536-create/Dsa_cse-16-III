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

int countNodes(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    cout << "Total number of nodes: " << countNodes(root);

    return 0;
}