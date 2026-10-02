#include <iostream>
using namespace std;

#define SIZE 5

class PriorityQueue {
private:
    int arr[SIZE];
    int front, rear;

public:
    PriorityQueue() {
        front = -1;
        rear = -1;
    }

    // Insert element (enqueue) based on priority
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1) {
            front = 0;
            arr[++rear] = value;
        } else {
            int i;
            // Shift elements to maintain descending priority order
            for (i = rear; i >= front && arr[i] < value; i--) {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = value;
            rear++;
        }
        cout << value << " inserted into priority queue\n";
    }

    // Delete element (highest priority first)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot delete\n";
            return;
        }
        cout << arr[front] << " deleted from priority queue\n";
        front++;
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Priority Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(50);
    pq.enqueue(40);

    pq.display();

    pq.dequeue();
    pq.display();

    return 0;
}
