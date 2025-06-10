#include <iostream>
#include <string>
using namespace std;
// Node structure
struct MenuNode {
    string menuName;
    bool isSelected;
    MenuNode* prev;
    MenuNode* next;

    MenuNode(string name) : menuName(name), isSelected(false), prev(nullptr), next(nullptr) {}
};
// Menu class
class Menu {
private:
    MenuNode* head;
    MenuNode* current;

    void clearSelection() {
        MenuNode* temp = head;
        while (temp) {
            temp->isSelected = false;
            temp = temp->next;
        }
    }

public:
    Menu() : head(nullptr), current(nullptr) {}

    // Add menu item at a specific position (0-based index)
    void addItem(string name, int position) {
        MenuNode* newNode = new MenuNode(name);
        if (position == 0 || head == nullptr) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            current = head;
            setSelected();
            return;
        }

        MenuNode* temp = head;
        int index = 0;
        while (temp->next && index < position - 1) {
            temp = temp->next;
            index++;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next)
            temp->next->prev = newNode;

        temp->next = newNode;
    }
    // Delete menu item by name
    void deleteItem(string name) {
        MenuNode* temp = head;
        while (temp) {
            if (temp->menuName == name) {
                if (temp->prev) temp->prev->next = temp->next;
                else head = temp->next;

                if (temp->next) temp->next->prev = temp->prev;

                // Update current pointer if needed
                if (current == temp)
                    current = head;

                delete temp;
                setSelected();
                return;
            }
            temp = temp->next;
        }
        cout << "Item not found.\n";
    }
    // Move forward
    void moveNext() {
        if (current && current->next) {
            current = current->next;
            setSelected();
        }
    }
    // Move backward
    void movePrev() {
        if (current && current->prev) {
            current = current->prev;
            setSelected();
        }
    }

    // Set isSelected only for current
    void setSelected() {
        clearSelection();
        if (current)
            current->isSelected = true;
    }
    // Display menu list with current selection
    void displayMenu() {
        MenuNode* temp = head;
        cout << "Menu Items:\n";
        while (temp) {
            cout << (temp->isSelected ? "-> " : "   ") << temp->menuName << "\n";
            temp = temp->next;
        }
        cout << "----------------------\n";
    }
};
int main() {
    Menu menu;
    menu.addItem("Sound", 0);
    menu.addItem("Display", 1);
    menu.addItem("Vehicle", 2);
    menu.addItem("Connectivity", 3);
    menu.displayMenu();
    menu.moveNext();
    menu.displayMenu();
    menu.moveNext();
    menu.displayMenu();
    menu.movePrev();
    menu.displayMenu();
    menu.addItem("Navigation", 2);
    menu.displayMenu();
    menu.deleteItem("Display");
    menu.displayMenu();
    return 0;
}

