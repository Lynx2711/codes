#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//traversing in a tree
//preorder traversal: root will print first then left sub-tree and then right sub-tree recursively
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//in-order: left sub-tree, root, right sub-tree
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

//post order: left sub-tree, right subtree, root
void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void printlevelOrder(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp!=NULL){
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
        
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);

    preOrder(root);
}