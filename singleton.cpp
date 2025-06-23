#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // Static pointer to hold single instance

    // Private constructor
    Singleton() {
        cout << "Singleton instance created." << endl;
    }

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static method to access the only instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }
};

// Define the static member
Singleton* Singleton::instance = nullptr;

// Main function to test singleton
int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();
    s2->showMessage();

    cout << "Are both instances same? " << (s1 == s2 ? "Yes" : "No") << endl;

    return 0;
}
