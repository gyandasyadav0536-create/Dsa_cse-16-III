
#include <bits/stdc++.h>
using namespace std;

// Structure of Binary Tree Node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// Preorder Traversal
void preorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    // Root
    ans.push_back(root->val);

    // Left
    preorder(root->left, ans);

    // Right
    preorder(root->right, ans);
}

int main() {
    // Creating Binary Tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> ans;

    // Calling Preorder Function
    preorder(root, ans);

    // Printing Result
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

