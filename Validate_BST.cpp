#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

bool isBST(TreeNode* root, long long mn, long long mx) {
    if (root == nullptr)
        return true;

    if (root->val <= mn || root->val >= mx)
        return false;

    return isBST(root->left, mn, root->val) &&
           isBST(root->right, root->val, mx);
}

int main() {
    

    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if (isBST(root, LLONG_MIN, LLONG_MAX))
        cout << "true";
    else
        cout << "false";

    return 0;
}