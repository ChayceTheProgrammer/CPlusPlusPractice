#include <iostream>
#include <memory>

class LinkedList {
private:
    // 1. Define the Node struct inside the private section
    struct Node {
        int data;
        std::unique_ptr<Node> next; // Smart pointer handles memory automatically

        // Constructor for easy node creation
        Node(int value) : data(value), next(nullptr) {}
    };

    // The head of the list (points to the first node)
    std::unique_ptr<Node> head;

public:
    LinkedList() : head(nullptr) {}

    // 2. Add a new node to the front of the list
    void insertAtHead(int value) {
        auto newNode = std::make_unique<Node>(value);
        
        // New node points to what the head was previously pointing to
        newNode->next = std::move(head);
        
        // Head now points to our new node
        head = std::move(newNode);
    }

    // 3. Print the entire list
    void display() const {
        Node* current = head.get(); // Use a raw pointer to traverse without taking ownership
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next.get();
        }
        std::cout << "nullptr\n";
    }
};

int main() {
    LinkedList list;

    list.insertAtHead(30);
    list.insertAtHead(20);
    list.insertAtHead(10);

    std::cout << "Linked List elements: ";
    list.display(); // Output: 10 -> 20 -> 30 -> nullptr

    return 0;
}