// creation and display
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    // create 3 nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    // assign data
    first -> data = 123;
    second -> data = 456;
    third -> data = 789;
    //linked nodes
    first -> next = second;
    second -> next = third;
    third -> next= nullptr;
    //traverse and print
    Node* temp = first;
    while(temp!= nullptr){
        cout << temp-> data << " " ;
        temp = temp -> next;
    }
    return 0;
}
//insert at begin
// #include <iostream>
// using namespace std;
// Define node structure
// struct Node {
//     int data;
//     Node* next;
// };
// // Function to insert at the beginning
// void insertAtBeginning(Node*  &head, int value) {
//     Node* newNode = new Node(); // create a new node
//     newNode->data = value;      // assign value
//     newNode->next = head;       // new node points to current head
//     head = newNode;             // head now becomes the new node
// }
// // Function to print the list
// void printList(Node* head) {
//     Node* temp = head;
//     cout << "Linked List: ";
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "nullptr" << endl;
// }
// Main function to test
// int main() {
//     Node* head = nullptr; // initially empty list
//     insertAtBeginning(head, 30);
//     insertAtBeginning(head, 20);
//     insertAtBeginning(head, 10);
//     printList(head); // should print: 10 -> 20 -> 30 -> nullptr
//     return 0;
// }
//insert at end
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* next;
// };
// void insertAtEnd(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;
//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void printList(Node* head) {
//     Node* temp = head;
//     cout << "Linked List: ";
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "nullptr" << endl;
// }
// int main() {
//     Node* head = nullptr;
//     insertAtEnd(head, 775);
//     insertAtEnd(head, 343);
//     insertAtEnd(head, 564);
//     printList(head); 
//     return 0;
// }
//Delete a Node by Value
// #include <iostream>
// using namespace std;
// // Define Node structure
// struct Node {
//     int data;
//     Node* next;
// };
// // Insert a node at the end
// void insertAtEnd(Node*& head, int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = nullptr;
//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }
// // Delete a node with a given value
// void deleteNode(Node*& head, int value) {
//     if (head == nullptr) return;
//     // Delete head node
//     if (head->data == value) {
//         Node* toDelete = head;
//         head = head->next;
//         delete toDelete;
//         return;
//     }
//     // Search for the node before the one to delete
//     Node* temp = head;
//     while (temp->next != nullptr && temp->next->data != value) {
//         temp = temp->next;
//     }
//     if (temp->next == nullptr) return; // Node not found
//     // Delete node
//     Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }
// // Print the linked list
// void printList(Node* head) {
//     cout << "Linked List: ";
//     while (head != nullptr) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "nullptr" << endl;
// }
// // Main function to test everything
// int main() {
//     Node* head = nullptr;
//     insertAtEnd(head, 10);
//     insertAtEnd(head, 20);
//     insertAtEnd(head, 30);
//     insertAtEnd(head, 40);
//     printList(head); // Output: 10 -> 20 -> 30 -> 40 -> nullptr
//     deleteNode(head, 20);
//     printList(head); // Output: 10 -> 30 -> 40 -> nullptr
//     deleteNode(head, 10);
//     printList(head); // Output: 30 -> 40 -> nullptr
//     deleteNode(head, 50); // Node not in list
//     printList(head); // Output: 30 -> 40 -> nullptr
//     return 0;
// }

