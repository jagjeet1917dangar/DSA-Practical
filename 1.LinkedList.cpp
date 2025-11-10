//Wrtie a program to create a singly linked list and perform :
// 1. Insertion a node at beginning
// 2. display the list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class SinglyLinkedList {
public:
    Node* head;
    
    SinglyLinkedList() {
        head = nullptr;
    }
    
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};
int main() {
    SinglyLinkedList list;
    
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);
    
    cout << "Singly Linked List: ";
    list.display();
    
    return 0;
}