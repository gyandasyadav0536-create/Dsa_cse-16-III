#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

void bottomView(Node* root) {
    if (root == NULL)
        return;

    map<int, int> mp;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        Node* temp = p.first;
        int hd = p.second;

        mp[hd] = temp->data;

        if (temp->left)
            q.push({temp->left, hd - 1});

        if (temp->right)
            q.push({temp->right, hd + 1});
    }

    for (auto x : mp)
        cout << x.second << " ";
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    cout << "Bottom View: ";
    bottomView(root);

    return 0;
}