#include "singly_linked_list.h"

SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

SinglyLinkedList::~SinglyLinkedList() {
    while (head != nullptr) {
        deleteFromBeginning();
    }
}

void SinglyLinkedList::insertAtBeginning(int data) { // O(1)
    head = new Node(data, head);
}

void SinglyLinkedList::insertAtEnd(int data) { // O(n)
    if (!head) {
        head = new Node(data);
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

void SinglyLinkedList::insert(int data) {
    Node*  newNode = new Node(data, nullptr);
    Node** temp    = &head;

    while (*temp != nullptr && data > (*temp)->data) {
        temp = &((*temp)->next);
    }

    newNode->next = *temp;
    *temp         = newNode;
}

SinglyLinkedList::Node* SinglyLinkedList::deleteFromBeginning() { // O(1)
    if (!head) {
        return nullptr;
    }

    Node* deleted = head;
    head          = head->next;
    deleted->next = nullptr;
    return deleted;
}

SinglyLinkedList::Node* SinglyLinkedList::deleteMax() {
    if (!head) {
        return nullptr;
    }

    Node *tempMax = head, *tempNext = head->next, *prevMax = nullptr,
         *prevNext = head;

    while (tempNext) {
        if (tempNext->data > tempMax->data) {
            tempMax = tempNext;
            prevMax = prevNext;
        }
        prevNext = tempNext;
        tempNext = tempNext->next;
    }

    if (!prevMax) {
        head = tempMax->next;
    }

    prevMax->next = tempMax->next;
    tempMax->next = nullptr;
    return tempMax;
}

SinglyLinkedList::Node* SinglyLinkedList::search(int val) {
    Node* sentinel = new Node(val);
    Node* temp     = head;

    while (temp->data != val) {
        temp = temp->next;
    }

    return temp == sentinel ? nullptr : temp;
}

void SinglyLinkedList::display() { // O(n)
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}