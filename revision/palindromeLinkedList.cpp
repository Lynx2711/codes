//palindrome with a linked list
//delete elemnts that appear in one list from the other
//ground header 
#include <iostream>

// Node structure for Grounded Header Linked List
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node*& header, int newData) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = newData;

    // Update the pointers
    newNode->next = header->next;
    header->next = newNode;
}

// Function to display the linked list
void displayList(const Node* header) {
    // Start from the first node after the header
    Node* current = header->next;

    // Traverse and print the linked list
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    std::cout << std::endl;
}

/*
int main() {
    // Create the grounded header node
    Node* header = new Node;
    header->next = nullptr;

    int newData;

    while (true) {
        std::cin >> newData;

        if (newData == -1) {
            break;
        }

        // Insert node at the beginning
        insertAtBeginning(header, newData);
    }

    displayList(header);

    return 0;
}
