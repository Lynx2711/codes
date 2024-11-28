//singly linked list
//this one is for strings
#include <iostream>
using namespace std;
struct Node{
    string data;
    Node* next;
}
void insertAtBeginning(Node** head,string new_data){
    Node* n = new Node(new_data);
    //n->data = new_data;
    n->next = (*head);  //we tryin new things here buddy
    (*head) = n;
}
void append(Node** head,string new_data){
    Node* n = new Node();
    n->data = new_data;
    Node* last = *head;
    n->next = NULL;
    if(*head==NULL){
        *head = n;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = n;
}
void print(Node* node){
    while(node!=NULL){
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main(){
    Node* head = NULL;
    int n;
    cin>>n; //number of nodes
    for(int i = 0;i<n;i++){
        string str;
        cin>>str;
        insertAtBeginning(&head,str);
    }
    print(head);
    string new_string;
    cin>>new_string;
    insertAtEnd(&head,new_str);
    print(head);
}

//sorted linked list
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}
void Sortedinsert(Node** head,int newdata){
    Node* n = new Node;
    n->data = newdata;
    n->next = NULL;

    Node* curr;
    if(*head == NULL || (*head)->data >= newdata){
        n->next = *head;
    }
    else{
        curr = *head;
        while(curr->next != NULL && curr->next->data < newdata){
            curr = curr->next;
        }
        n->next = curr->next;
        curr->next = n;
    }
    void print(Node* head){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    //main fuunction
}