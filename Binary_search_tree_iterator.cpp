#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class BSTIterator {
private:
    stack<TreeNode*> st;

    void pushLeft(TreeNode* root) {
        while (root != NULL) {
            st.push(root);
            root = root->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }

    int next() {
        TreeNode* curr = st.top();
        st.pop();

        if (curr->right != NULL) {
            pushLeft(curr->right);
        }

        return curr->val;
    }

    bool hasNext() {
        return !st.empty();
    }
};

int main() {
    // Creating BST
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    // Creating BST Iterator
    BSTIterator bSTIterator(root);

    cout << bSTIterator.next() << endl;
    cout << bSTIterator.next() << endl;

    cout << boolalpha << bSTIterator.hasNext() << endl;

    cout << bSTIterator.next() << endl;

    cout << bSTIterator.hasNext() << endl;

    cout << bSTIterator.next() << endl;

    cout << bSTIterator.hasNext() << endl;

    cout << bSTIterator.next() << endl;

    cout << bSTIterator.hasNext() << endl;

    return 0;
}