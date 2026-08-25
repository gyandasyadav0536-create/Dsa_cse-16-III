#include <iostream>
using namespace std;
class stack
{
int array[20];
int top;
int size;
public;
stack( int n)
{
top==-1;
size=N;
}
void push(int n) {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
        } 
     else {
            arr[++top] =  n;
            cout << item << " pushed into the stack." << endl;
        }
    }
void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top] << " popped from the stack." << endl;
            top--;
        }
    }
 void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements (Top to Bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
int N;
cin>>N;
 stack st(item);
 st.push(10);
st.push(20);
st.push(10);
st.push(40);
cout<<"after insertion"<<endl;
st.display();
cout<<endl;

st.pop();
st.push(60);
cout<<"after deletion"<<endl;
st.display();



}