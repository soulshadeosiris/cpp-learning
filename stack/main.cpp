#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* push(Node* head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    return newNode;
}

Node* pop(Node* head) {
    return head->next;
}

int peak(Node* head) {
    return head->value;
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
    Node* node4 = new Node();
    Node* node5 = new Node();
    node1->value = 1;
    node1->next = node2;
    node2->value = 2;
    node2->next = node3;
    node3->value = 3;
    node3->next = node4;
    node4->value = 4;
    node4->next = node5;
    node5->value = 5;
    node5->next = nullptr;

    node1 = push(node1, 6);
    printInfo(node1);

    cout << endl;

    node1 = pop(node1);
    printInfo(node1);

    cout << endl;

    cout << peak(node1) << endl;

    return 0;
}
