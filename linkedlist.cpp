#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;       //create pointer to next node

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    Node* head = NULL;
}