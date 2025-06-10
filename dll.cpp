#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};
void printForward(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printBackward(Node* tail) {
    Node* temp = tail;
    cout << "Backward: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main() {
    // Create 3 nodes
    Node* first = new Node{10, nullptr, nullptr};
    Node* second = new Node{20, nullptr, nullptr};
    Node* third = new Node{30, nullptr, nullptr};
    // Connect nodes
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    // Traverse
    printForward(first);    // Head to tail
    printBackward(third);   // Tail to head
    return 0;
}
