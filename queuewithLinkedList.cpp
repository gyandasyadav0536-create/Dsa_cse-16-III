#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Insert element (enqueue)
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " inserted into queue\n";
    }

    // Delete element (dequeue)
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow! Cannot delete\n";
            return;
        }
        Node* temp = front;
        cout << front->