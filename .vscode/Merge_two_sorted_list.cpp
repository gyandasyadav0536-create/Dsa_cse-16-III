#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

Node* mergeTwoLists(Node* list1, Node* list2) {
    Node dummy(0);
    Node* tail = &dummy;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    tail->next = (list1 ? list1 : list2);
    return dummy.next;
}

int main() {
    int n1; cin >> n1;
    Node* list1 = NULL; Node* tail1 = NULL;
    for(int i=0;i<n1;i++){
        int x; cin >> x;
        Node* node = new Node(x);
        if(!list1) list1 = node;
        else tail1->next = node;
        tail1 = node;
    }

    int n2; cin >> n2;
    Node* list2 = NULL; Node* tail2 = NULL;
    for(int i=0;i<n2;i++){
        int x; cin >> x;
        Node* node = new Node(x);
        if(!list2) list2 = node;
        else tail2->next = node;
        tail2 = node;
    }

    Node* merged = mergeTwoLists(list1, list2);
    while(merged){
        cout << merged->val << " ";
        merged = merged->next;
    }
    cout << endl;
}
