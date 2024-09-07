# Linked Lists in C++

## Introduction
A linked list is a linear data structure where elements are stored in nodes. Each node contains a data field and a reference (link) to the next node in the sequence.

## Basic Structure

```cpp
struct Node {
    int data;
    Node* next;
};
```

## Types of Linked Lists
1. Singly Linked List: Each node points to the next node
2. Doubly Linked List: Each node has pointers to both next and previous nodes
3. Circular Linked List: Last node points back to the first node

## Basic Operations

### 1. Insertion
- At the beginning
- At the end
- At a specific position

### 2. Deletion
- From the beginning
- From the end
- From a specific position

### 3. Traversal
- Iterate through the list to access/modify data

## Sample Implementation (Singly Linked List)

```cpp
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Other methods (delete, search, etc.) can be implemented here
};
```

## Advantages
- Dynamic size
- Efficient insertion and deletion

## Disadvantages
- Random access is not allowed
- Extra memory for storing pointers

## Time Complexity
- Access: O(n)
- Search: O(n)
- Insertion: O(1) at the beginning, O(n) at the end
- Deletion: O(1) at the beginning, O(n) at the end

Remember to handle memory management properly to avoid memory leaks!
