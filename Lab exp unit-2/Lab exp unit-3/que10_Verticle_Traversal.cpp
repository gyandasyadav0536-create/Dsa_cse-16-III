#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

void verticalOrder(Node* root) {
    if (root == NULL)
        return;

    map<int, vector<int>> mp;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        Node* temp = p.first;
        int hd = p.second;

        mp[hd].push_back(temp->data);

        if (temp->left)
            q.push({temp->left, hd - 1});

        if (temp->right)
            q.push({temp->right, hd + 1});
    }

    for (auto x : mp) {
        for (int val : x.second)
            cout << val << " ";

        cout << endl;
    }
}

int main() {
    Node* root = new Node{1, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{3, NULL, NULL};
    root->left->left = new Node{4, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL};

    cout << "Vertical Traversal:\n";
    verticalOrder(root);

    return 0;
}