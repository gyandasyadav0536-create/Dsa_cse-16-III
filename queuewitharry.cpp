#include <iostream>
using namespace std;

#define SIZE 5   // Maximum size of queue

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert element (enqueue)
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1) front = 0; // first element
        arr[++rear] = value;
        cout << value << " inserted into queue\n";
    }

    // Delete element (dequeue)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot delete\n";
            return;
        }
        cout << arr[front] << " deleted from queue\n";
        front++;
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}
