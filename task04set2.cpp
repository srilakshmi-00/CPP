#include <iostream>
#include<vector>
#include<deque>
#include<string>
#include<list>
using namespace std;
 // Vector for Security Event Archive
vector<string> SecurityEventArchive;
void storeEvent(const string& alert) {
    SecurityEventArchive.push_back(alert);
}
void displaySecurityEvents() {
    cout << "\n--- Security Event Archive ---\n";
    for (const auto& event : SecurityEventArchive) {
        cout << event << endl;
    }
}
// Deque for Surveillance Command Queue
deque<string> SurveillanceCommandQueue;
void storeSurveillanceCommand(const string& command, bool highPriority) {
    if (highPriority)
        SurveillanceCommandQueue.push_front(command);
    else
        SurveillanceCommandQueue.push_back(command);
}
void processCommand() {
    if (!SurveillanceCommandQueue.empty()) {
        cout << "\n--- Processing Command ---\n";
        cout << "Executing: " << SurveillanceCommandQueue.front() << endl;
        SurveillanceCommandQueue.pop_front();
    } else {
        cout << "No commands to process.\n";
    }
}
// List for Active Security Alerts
list<string> ActiveSecurityAlerts;
void insertAlert(const string& alert) {
    ActiveSecurityAlerts.push_back(alert);
}
void removeAlert(const string& alert) {
    for (auto it = ActiveSecurityAlerts.begin(); it != ActiveSecurityAlerts.end(); ++it) {
        if (*it == alert) {
            ActiveSecurityAlerts.erase(it);
            cout << "[Resolved]: " << alert << endl;
            return;
        }
    }
    cout << "[Alert not found]: " << alert << endl;
}
void displayActiveAlerts() {
    cout << "\n--- Active Security Alerts ---\n";
    for (const auto& alert : ActiveSecurityAlerts) {
        cout << alert << endl;
    }
}
int main() {
    // Vector events
    storeEvent("Camera Motion Detected");
    storeEvent("Door Forced Open");
    displaySecurityEvents();
    // Deque commands
    storeSurveillanceCommand("Start Recording", false);
    storeSurveillanceCommand("Lock All Doors", true);
    storeSurveillanceCommand("Enable Night Mode", false);
    processCommand();
    // List alerts
    insertAlert("Intruder Detected");
    insertAlert("Window Open Alert");
    insertAlert("Door Tamper Alert");
    insertAlert("Smoke Detected");
    displayActiveAlerts();
    removeAlert("Window Open Alert");
    displayActiveAlerts();
    return 0;
}

