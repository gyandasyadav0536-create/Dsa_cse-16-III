//Program 10: Check Whether Binary Tree is Strictly Binary Tree
//A strictly binary tree is a tree in which every node has either 0 or 2 children.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

bool isStrict(Node* root) {
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->left != NULL && root->right != NULL)
        return isStrict(root->left) &&
               isStrict(root->right);

    return false;
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};

    if (isStrict(root))
        cout << "Strictly Binary Tree";
    else
        cout << "Not a Strictly Binary Tree";

    return 0;
}