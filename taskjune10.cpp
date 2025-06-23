#include <iostream>
#include <set>
#include <map>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Part 1: Occupied Parking Slots
    set<int> occupiedSlots = {101, 102, 103, 101, 104, 105, 106, 107, 108, 105, 109, 110};

    cout << "Part 1: Unique Occupied Parking Slots:\n";
    for (auto it = occupiedSlots.begin(); it != occupiedSlots.end(); ++it) {
        cout << "Slot: " << *it << endl;
    }

    cout << "\n";

    // Part 2: Vehicle Slot Mapping
    map<string, int> vehicleToSlot;
    vehicleToSlot["MH12AB1234"] = 101;
    vehicleToSlot["MH14CD5678"] = 102;
    vehicleToSlot["MH13EF9012"] = 103;
    vehicleToSlot["MH10GH3456"] = 104;
    vehicleToSlot["MH11IJ7890"] = 105;

    cout << "Part 2: Vehicle to Slot Mapping:\n";
    for (auto it = vehicleToSlot.begin(); it != vehicleToSlot.end(); ++it) {
        cout << "Vehicle: " << it->first << " => Slot: " << it->second << endl;
    }

    cout << "\n";

    // Part 3: Entry Log
    multimap<string, string> entryLog;
    entryLog.insert({"MH12AB1234", "10:00 AM"});
    entryLog.insert({"MH12AB1234", "01:00 PM"});
    entryLog.insert({"MH14CD5678", "09:30 AM"});
    entryLog.insert({"MH10GH3456", "11:45 AM"});
    entryLog.insert({"MH12AB1234", "05:30 PM"});
    entryLog.insert({"MH13EF9012", "03:00 PM"});

    cout << "Part 3: All Entry Records:\n";
    for (auto it = entryLog.begin(); it != entryLog.end(); ++it) {
        cout << "Vehicle: " << it->first << " => Time: " << it->second << endl;
    }

    // Specific vehicle entry log
    string targetVehicle = "MH12AB1234";
    cout << "\nEntry Records for vehicle " << targetVehicle << ":\n";
    auto range = entryLog.equal_range(targetVehicle);
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Vehicle: " << it->first << " => Time: " << it->second << endl;
    }

    cout << "\n";

    // Part 4: Frequent Visitor Tracking (Optional)
    multiset<string> visitorCount;
    vector<string> entries = {
        "MH12AB1234", "MH14CD5678", "MH12AB1234", "MH10GH3456",
        "MH13EF9012", "MH12AB1234", "MH14CD5678"
    };

    for (const auto& v : entries) {
        visitorCount.insert(v);
    }

    cout << "Part 4: All Vehicle Visits:\n";
    for (auto it = visitorCount.begin(); it != visitorCount.end(); ++it) {
        cout << "Visited: " << *it << endl;
    }

    cout << "\nNumber of visits by " << targetVehicle << ": " 
         << visitorCount.count(targetVehicle) << endl;
    return 0;
}

