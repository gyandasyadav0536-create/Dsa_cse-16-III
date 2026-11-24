#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

TreeNode* buildBST(vector<int>& nums, int start, int end) {
    if (start > end)
        return nullptr;

    int mid = start + (end - start) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    root->left = buildBST(nums, start, mid - 1);
    root->right = buildBST(nums, mid + 1, end);

    return root;
}

void preorder(TreeNode* root) {
    if (root == nullptr)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};

    TreeNode* root = buildBST(nums, 0, nums.size() - 1);

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}