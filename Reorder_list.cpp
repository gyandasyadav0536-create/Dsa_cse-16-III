#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Reorder Linked List
void reorderList(ListNode* head) {

    if (head == NULL || head->next == NULL)
        return;

    // Step 1: Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    ListNode* second = slow->next;
    slow->next = NULL;

    ListNode* prev = NULL;

    while (second != NULL) {
        ListNode* nextNode = second->next;

        second->next = prev;
        prev = second;
        second = nextNode;
    }

    // Step 3: Merge two halves
    ListNode* first = head;
    second = prev;

    while (second != NULL) {
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;

        first->next = second;
        second->next = temp1;

        first = temp1;
        second = temp2;
    }
}

// Print Linked List
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Main Function
int main() {

    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);

    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    reorderList(head);

    cout << "Reordered List: ";
    printList(head);

    return 0;
}