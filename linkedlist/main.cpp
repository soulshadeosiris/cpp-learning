#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void printList(Node* node) {
    if (node == nullptr) return;
    cout << node->value << endl;
    printList(node->next);
}

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->value = 1;
    node1->next = node2;
    node2->value = 2;
    node2->next = node3;
    node3->value = 3;
    node3->next = nullptr;

    cout << " " << endl;
    printList(node1);

    Node* reversed = reverseList(node1);

    cout << " " << endl;
    printList(reversed);

    return 0;
}