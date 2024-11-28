//linked list representation
#include<iostream>
using namespace std;
struct Node{
    int data;
    int next;
};
const int MAX_SIZE = 30;
Node stack[MAX_SIZE];
int top = -1;

void push(int data){
    if(top > MAX_SIZE - 1){
        cout<<"stack is full";
        return;
    }
    top++;
    stack[top].data = data;
    if(top>0){
        stack[top].next = top-1;
    }
    else{
        stack[top].next = -1;
    }
}

void pop(){
    if(top<0){
        cout<<"stack is empty";
        return;
    }
    top--;
}
void display(){
    int curr = top;
    while(curr>=0){
        cout<<stack[top].data<<" ";
        curr = stack[top].next;
    }
}
int main(){
    int n;
    cin>>n; //number of elements
    for(int i = 0;i<n;i++){
        int val;
        cin>>val;
        push(val);
    }
    display();
    if(top>=0){
        cout<<stack[top].data<<endl;
        pop(); //gives the top element
        display();
    }
}

//array implimentation
void push(int data){
    if(top>= maxsize - 1){
         cout<<"stack overflow"; 
         return;
}

    else stack[++top] = data;
}


//linked list binary conversion of stack
#include <iostream>
#include <string>

using namespace std;

struct Stack {
    int stackArray[32];  // Maximum size of the stack (assuming 32-bit integers)
    int top;
};

void initialize(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, int value) {
    if (stack->top < 31) {
        stack->stackArray[++(stack->top)] = value;
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->stackArray[(stack->top)--];
    } else {
        return -1;
    }
}

string decimalToBinary(int decimal) {
    Stack stack;
    initialize(&stack);

    while (decimal > 0) {
        int remainder = decimal % 2;
        push(&stack, remainder);
        decimal /= 2;
    }

    string binary = "";
    while (stack.top >= 0) {
        int bit = pop(&stack);
        binary += to_string(bit);
    }

    return binary;
}

int main() {
    int decimal;
    cin >> decimal;

    string binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;

    return 0;
}
