#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int value)
    {
        Node *newnode = new Node(value);
        newnode->next = top;
        top = newnode;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void display()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    st.pop();

    st.display();

    return 0;
}