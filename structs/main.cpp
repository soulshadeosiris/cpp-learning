struct Node {
    int value;
    Node* left;
    Node* right;
};

int main() {
    Node* node = new Node();
    Node* leftNode = new Node();
    node->value = 5;
    node->left = leftNode;
    node->right = nullptr;
    leftNode->value = 3;
    leftNode->left = nullptr;
    leftNode->right = nullptr;
}