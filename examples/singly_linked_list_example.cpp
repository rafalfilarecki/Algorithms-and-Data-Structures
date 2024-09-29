#include "singly_linked_list.h"

int main() {
    SinglyLinkedList list;

    // Insert elements at the end of the list
    list.insertAtEnd(10);
    std::cout << "Inserted 10 at the end." << std::endl;
    list.insertAtEnd(20);
    std::cout << "Inserted 20 at the end." << std::endl;
    list.insertAtEnd(30);
    std::cout << "Inserted 30 at the end." << std::endl;

    std::cout << "List after inserting elements at the end: ";
    list.display();

    // Insert an element at the beginning of the list
    list.insertAtBeginning(5);
    std::cout << "\nInserted 5 at the beginning." << std::endl;
    std::cout << "List after inserting an element at the beginning: ";
    list.display();

    // Insert elements in a sorted manner (non-decreasing order)
    list.insert(25);
    std::cout << "\nInserted 25 in sorted order." << std::endl;
    list.insert(15);
    std::cout << "Inserted 15 in sorted order." << std::endl;

    std::cout << "List after inserting elements in sorted order: ";
    list.display();

    // Delete an element from the beginning of the list
    list.deleteFromBeginning();
    std::cout << "\nDeleted an element from the beginning." << std::endl;
    std::cout << "List after deleting an element from the beginning: ";
    list.display();

    // Delete the maximum element from the list
    list.deleteMax();
    std::cout << "\nDeleted the maximum element from the list." << std::endl;
    std::cout << "List after deleting the maximum element: ";
    list.display();

    // Search for a specific element in the list
    int valueToSearch = 15;
    std::cout << "\nSearching for a node with value 15" << std::endl;
    SinglyLinkedList::Node* foundNode = list.search(valueToSearch);
    if (foundNode != nullptr) {
        std::cout << "Element " << valueToSearch << " found in the list."
                  << std::endl;
    } else {
        std::cout << "Element " << valueToSearch << " not found in the list."
                  << std::endl;
    }

    return 0;
}