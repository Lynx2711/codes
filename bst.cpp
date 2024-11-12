#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}
bool search(Node* root, int value) {
    if (root == nullptr) {
        return false; 
    }
    if (root->data == value) {
        return true;  
    }
    if (value < root->data) {
        return search(root->left, value);
    } 
    else {
        return search(root->right, value);
    }
}
void inOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main(){
    Node* root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,3);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,7);
    int valueToSearch = 8;
    if (search(root, valueToSearch)) {
        cout << valueToSearch << " found" << endl;
    } else {
        cout << valueToSearch << " not found" << endl;
    }

    return 0;
}