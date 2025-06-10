#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
// Function to print the list
void printList(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}
// Function to insert at end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        head->next = head; // Point to itself
        return;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
int main() {
    Node* head = nullptr;
    insertAtEnd(head, 233);
    insertAtEnd(head, 678);
    insertAtEnd(head, 783);
    cout << "Circular Linked List: ";
    printList(head);
    return 0;
}
