#include <iostream>
using namespace std;

class Deque {
private:
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at rear
    void insertRear(int value) {
        if (rear == SIZE - 1) {
            cout << "Deque Overflow at rear!\n";
            return;
        }
        if (front == -1) front = 0; // first element
        arr[++rear] = value;
        cout << value << " inserted at rear\n";
    }

    // Insert at front
    void insertFront(int value) {
        if (front == 0) {
            cout << "Deque Overflow at front!\n";
            return;
        }
        if (front == -1) { // empty deque
            front = rear = 0;
            arr[front] = value;
        } else {
            arr[--front] = value;
        }
        cout << value << " inserted at front\n";
    }

    // Delete from front
    void deleteFront() {
        if (front == -1 || front > rear) {
            cout << "Deque Underflow at front!\n";
            return;
        }
        cout << arr[front] << " deleted from front\n";
        front++;
    }

    // Delete from rear
    void deleteRear() {
        if (rear == -1 || front > rear) {
            cout << "Deque Underflow at rear!\n";
            return;
        }
        cout << arr[rear] << " deleted from rear\n";
        rear--;
    }

    // Display deque
    void display() {
        if (front == -1 || front > rear) {
            cout << "Deque is empty\n";
            return;
        }
        cout << "Deque elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);

    dq.display();

    dq.deleteFront();
    dq.deleteRear();

    dq.display();

    return 0;
}
