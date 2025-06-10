#include <iostream>
using namespace std;

int main() {
    char name[30];
    char city[30];

    cout << "Enter your name: ";
    cin.getline(name, 30);  // reads an empty string if newline is left 

    cout << "Enter your city: ";
    cin.get(city, 30);  //  stops at newline, newline is left in buffer

    cout << "\nName: " << name;
    cout << "\nCity: " << city;

    return 0;
}
