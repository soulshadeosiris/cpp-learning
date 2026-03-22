#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

bool search(Node* node, int target) {

    if(node == nullptr) {
        return false;
    }
    else if (node->value < target) {
        return search(node->right, target);
    }
    else if (node->value > target) {
        return search(node->left, target);
    }
    else {
        return true;
    }

    return false;
}

int main() {

    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    Node* node5 = new Node();

    node1->value = 10;
    node1->left = node2;
    node1->right = node3;
    node2->value = 4;
    node2->left = node4;
    node2->right = node5;
    node3->value = 14;
    node3->left = nullptr;
    node3->right = nullptr;
    node4->value = 2;
    node4->left = nullptr;
    node4->right = nullptr;
    node5->value = 6;
    node5->left = nullptr;
    node5->right = nullptr;

    cout << search(node1, 6);


    return 0;
}