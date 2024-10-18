#include <iostream>
using namespace std;

class Node{
    
};
int countNodes(Node* root){
    if(root==NULL) return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}
int main(){

}