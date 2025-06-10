#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

// Global ticket containers
stack<string> urgentTickets;        // LIFO for urgent tickets
queue<string> normalTickets;        // FIFO for normal tickets

// Function to add a ticket
void addTicket(string ticket, bool isUrgent) {
    if (isUrgent) {
        urgentTickets.push(ticket);
        cout << "[URGENT] Ticket added to urgent stack: " << ticket << endl;
    } else {
        normalTickets.push(ticket);
        cout << "[NORMAL] Ticket added to normal queue: " << ticket << endl;
    }
}

// Function to process the next ticket
void processTicket() {
    if (!urgentTickets.empty()) {
        cout << " Processing urgent ticket: " << urgentTickets.top() << endl;
        urgentTickets.pop();
    } else if (!normalTickets.empty()) {
        cout << " Processing normal ticket: " << normalTickets.front() << endl;
        normalTickets.pop();
    } else {
        cout << " No tickets to process." << endl;
    }
}

// Display all pending tickets
void displayTickets() {
    stack<string> tempUrgent = urgentTickets;
    queue<string> tempNormal = normalTickets;

    cout << "\n----- Pending Tickets -----" << endl;
    
    cout << "\nUrgent Tickets (Stack - Top to Bottom):" << endl;
    while (!tempUrgent.empty()) {
        cout << "- " << tempUrgent.top() << endl;
        tempUrgent.pop();
    }

    cout << "\nNormal Tickets (Queue - Front to Back):" << endl;
    while (!tempNormal.empty()) {
        cout << "- " << tempNormal.front() << endl;
        tempNormal.pop();
    }
    cout << "---------------------------\n" << endl;
}

int main() {
    // Add tickets
    addTicket("Ticket 101: Login issue", false);
    addTicket("Ticket 102: System crash", true);
    addTicket("Ticket 103: Payment failed", false);
    addTicket("Ticket 104: Data loss", true);
    addTicket("Ticket 105: App not opening", false);

    // Display current tickets
    displayTickets();

    // Process tickets
    cout << "\n Processing Tickets:\n";
    processTicket();
    processTicket();
    processTicket();

    // Display after processing
    displayTickets();

    return 0;
}
