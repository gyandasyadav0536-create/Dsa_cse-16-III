#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

TreeNode *firstNode = NULL, *secondNode = NULL, *prevNode = NULL;

void inorder(TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);

    if (prevNode && prevNode->val > root->val) {
        if (firstNode == NULL)
            firstNode = prevNode;

        secondNode = root;
    }

    prevNode = root;

    inorder(root->right);
}

void recoverTree(TreeNode* root) {
    inorder(root);

    if (firstNode && secondNode)
        swap(firstNode->val, secondNode->val);
}

void printInorder(TreeNode* root) {
    if (root == NULL)
        return;

    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    // Example: [3,1,4,null,null,2]

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);

    cout << "Before Recovery (Inorder): ";
    printInorder(root);
    cout << endl;

    recoverTree(root);

    cout << "After Recovery (Inorder): ";
    printInorder(root);
    cout << endl;

    return 0;
}