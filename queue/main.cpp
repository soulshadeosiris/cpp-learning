#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* push(Node* tail, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    tail->next = newNode;
    return newNode;
}

Node* pop(Node* head) {
    return head->next;
}

void printInfo(Node* head) {
    if (head == nullptr) {
        return;
    }
    else {
        cout << head->value << endl;
        return printInfo(head->next);
    }
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

    Node* head = node1;
    Node* tail = node3;

    tail = push(tail, 4);
    head = pop(head); 

    printInfo(head);

    return 0;
}