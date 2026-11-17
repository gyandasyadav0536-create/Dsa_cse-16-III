#include <bits/stdc++.h>
using namespace std;

// Structure of a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Function to insert a node
Node* insert(Node* root, int value) {

    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to search an element
bool search(Node* root, int key) {

    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        return true;
    }

    if (key < root->data) {
        return search(root->left, key);
    }
    else {
        return search(root->right, key);
    }
}

// Inorder traversal
void inorder(Node* root) {

    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Main function
int main() {

    Node* root = NULL;
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;

        root = insert(root, value);
    }

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\n\nEnter element to search: ";
    cin >> key;

    if (search(root, key)) {
        cout << "Element found in BST.";
    }
    else {
        cout << "Element not found in BST.";
    }

    return 0;
}
