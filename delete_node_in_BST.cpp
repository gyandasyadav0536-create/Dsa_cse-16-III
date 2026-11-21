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

// Insert into BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Find minimum node
TreeNode* findMin(TreeNode* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete node from BST
TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL)
        return NULL;

    if (key < root->val)
        root->left = deleteNode(root->left, key);

    else if (key > root->val)
        root->right = deleteNode(root->right, key);

    else {
        // Node found

        // No left child
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        // No right child
        if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Two children
        TreeNode* temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }

    return root;
}

// Inorder Traversal
void inorder(TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = NULL;

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 7);

    cout << "Before deletion: ";
    inorder(root);
    cout << endl;

    int key = 3;
    root = deleteNode(root, key);

    cout << "After deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}