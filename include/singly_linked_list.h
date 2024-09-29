#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>

class SinglyLinkedList {
public:
    struct Node {
        int   data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
        Node(int val, Node* next) : data(val), next(next) {}
    };

private:
    Node* head;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void  insertAtBeginning(int data);
    void  insertAtEnd(int data);
    void  insert(int data);
    Node* deleteFromBeginning();
    Node* deleteMax();
    Node* search(int data);
    void  display();
};

#endif // SINGLY_LINKED_LIST_H