#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to swap nodes in pairs
ListNode* swapPairs(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;

    while (prev->next != nullptr && prev->next->next != nullptr) {
        ListNode* first = prev->next;
        ListNode* second = first->next;

        // Swap
        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Move prev forward
        prev = first;
    }
    return dummy.next;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create linked list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    // Example 1: [1,2,3,4]
    int arr1[] = {1,2,3,4};
    ListNode* head1 = createList(arr1, 4);
    cout << "Original List: ";
    printList(head1);
    head1 = swapPairs(head1);
    cout << "Swapped List:  ";
    printList(head1);

    // Example 2: []
    int arr2[] = {};
    ListNode* head2 = createList(arr2, 0);
    cout << "Original List: ";
    printList(head2);
    head2 = swapPairs(head2);
    cout << "Swapped List:  ";
    printList(head2);

    // Example 3: [1]
    int arr3[] = {1};
    ListNode* head3 = createList(arr3, 1);
    cout << "Original List: ";
    printList(head3);
    head3 = swapPairs(head3);
    cout << "Swapped List:  ";
    printList(head3);

    // Example 4: [1,2,3]
    int arr4[] = {1,2,3};
    ListNode* head4 = createList(arr4, 3);
    cout << "Original List: ";
    printList(head4);
    head4 = swapPairs(head4);
    cout << "Swapped List:  ";
    printList(head4);

    return 0;
}