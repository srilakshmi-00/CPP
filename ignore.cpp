// to discard the newline character after reading an integer.
#include <iostream>
using namespace std;
int main(){
    int age;
    char initial[20];
    char name[15];
    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the first letter of your name: ";
    cin.getline(initial,20);
    // Use cin.ignore() to discard the newline character
    //cin.ignore();
    //cout << "enter the name: ";
    //cin.get(name, 15);
    // Display the entered age and initial
    cout << "Your age is " << age << " and your initial is " << initial << endl;
    return 0;
}