#include <iostream>

class LinkedList {
private:
    // The Node struct stays simple, but uses a raw pointer
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head; // Raw pointer to the first node

public:
    // Constructor: Initialize head to null
    LinkedList() : head(nullptr) {}

    // Destructor: CRITICAL for manual memory management
    ~LinkedList() {
        clear();
    }

    // Add a new node to the front of the list
    void insertAtHead(int value) {
        // 1. Manually allocate memory on the heap
        Node* newNode = new Node(value);
        
        // 2. Point the new node to the current head
        newNode->next = head;
        
        // 3. Move the head pointer to the new node
        head = newNode;
    }

    // Safely delete all nodes to prevent memory leaks
    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next; // Save the next node before deleting current
            delete current;                 // Manually free the memory
            current = nextNode;             // Move to the next node
        }
        head = nullptr; // Reset head to prevent a dangling pointer
    }

    // Print the entire list
    void display() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
};

int main() {
    // Creating a scope block to demonstrate the destructor
    {
        LinkedList list;
        list.insertAtHead(30);
        list.insertAtHead(20);
        list.insertAtHead(10);

        std::cout << "Linked List: ";
        list.display(); // Output: 10 -> 20 -> 30 -> nullptr
    } 
    // <--- The list object goes out of scope here!
    // The destructor (~LinkedList) is automatically called, running the clean-up loop.

    return 0;
}