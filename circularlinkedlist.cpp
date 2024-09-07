#include <iostream>
using namespace std;

class Node{

};

insertAtTail(int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        n->next = head;
        return;
    }

    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next =n;
    n->next = head;
}

int main(){

}