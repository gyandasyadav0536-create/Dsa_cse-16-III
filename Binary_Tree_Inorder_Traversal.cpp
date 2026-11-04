#include <bits/stdc++.h>
using namespace std;

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

void inorderTraversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    // Left
    inorderTraversal(root->left, ans);

    // Root
    ans.push_back(root->val);

    // Right
    inorderTraversal(root->right, ans);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> ans;

    inorderTraversal(root, ans);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}