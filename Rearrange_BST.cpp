#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

class Solution {
private:
    TreeNode* curr;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);

        root->left = nullptr;
        curr->right = root;
        curr = root;

        inorder(root->right);
    }

public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        curr = dummy;

        inorder(root);

        return dummy->right;
    }
};

void printTree(TreeNode* root) {
    while (root) {
        cout << root->val;
        if (root->right) cout << " -> ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    // Creating BST:
    //       5
    //      / \
    //     3   6
    //    / \   \
    //   2   4   8
    //  /       / \
    // 1       7   9

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->left->left->left = new TreeNode(1);

    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);

    Solution obj;
    TreeNode* newRoot = obj.increasingBST(root);

    cout << "Increasing Order Search Tree:\n";
    printTree(newRoot);

    return 0;
}