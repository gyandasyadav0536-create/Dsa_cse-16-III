#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

class Solution {
    int sum = 0;

public:
    void convert(TreeNode* root) {
        if (root == NULL) return;

        convert(root->right);

        sum += root->val;
        root->val = sum;

        convert(root->left);
    }

    TreeNode* convertBST(TreeNode* root) {
        convert(root);
        return root;
    }
};

// Inorder traversal to display tree
void inorder(TreeNode* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    /*
            4
          /   \
         1     6
        / \   / \
       0   2 5   7
            \     \
             3     8
    */

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2);
    root->left->right->right = new TreeNode(3);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    root->right->right->right = new TreeNode(8);

    Solution obj;
    root = obj.convertBST(root);

    cout << "Inorder Traversal of Greater Tree:\n";
    inorder(root);

    return 0;
}