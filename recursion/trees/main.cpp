#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

bool search(Node* node, int value) {

    if (node == nullptr) {
        return false;
    }
    else if (node->value == value) {
        return true;
    }
    else {
        if (value > node->value) {
            return search(node->right, value);
        }
        else {
            return search(node->left, value);
        }
    }
    return false;
}

int main() {

    Node* parentNode = new Node();
    Node* leftChildNode = new Node();
    Node* rightChildNode = new Node();
    Node* leftGrandChildNode = new Node();
    Node* rightGrandChildNode = new Node();


    parentNode->value = 8;
    parentNode->left = leftChildNode;
    parentNode->right = rightChildNode;

    leftChildNode->value = 3;
    leftChildNode->left = leftGrandChildNode;
    leftChildNode->right = rightGrandChildNode;

    rightChildNode->value = 10;
    rightChildNode->left = nullptr;
    rightChildNode->right = nullptr;

    leftGrandChildNode->value = 1;
    leftGrandChildNode->left = nullptr;
    leftGrandChildNode->right = nullptr;

    rightGrandChildNode->value = 6;
    rightGrandChildNode->left = nullptr;
    rightGrandChildNode->right = nullptr;

    cout << search(parentNode, 5);

    return 0;
}