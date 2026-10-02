#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Stack class
class Stack {
private:
    Node* top; 

public:
    // Constructor
    Stack() {
        top = nullptr;
    }

    // Push element
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack.\n";
    }

    // Pop element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop.\n";
            return;
        }
        Node* temp = top;
        cout << "Popped: " << temp->data << "\n";
        top = top->next;
        delete temp;
    }

    // Peek top element
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element: " << top->data << "\n";
    }

    // Check if empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    // Destructor
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Main function
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    return 0;
}
