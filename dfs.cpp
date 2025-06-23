



/**
 * @brief Automotive HMI Telltale Management Module
 */

#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

void hmiTelltaleModule() {
    /// 1. Unique Active Telltales
    std::set<std::string> activeTelltales;
    activeTelltales.insert("ABS");
    activeTelltales.insert("Airbag");
    activeTelltales.insert("Low Fuel");
    activeTelltales.erase("Low Fuel");
    
    /// 2. Frequency Tracker
    std::multiset<std::string> telltaleLog;
    telltaleLog.insert("ABS");
    telltaleLog.insert("ABS");
    telltaleLog.insert("Airbag");

    std::cout << "ABS count: " << telltaleLog.count("ABS") << "\n";

    /// 3. Telltale Timestamp Mapping
    std::map<std::string, std::string> telltaleTimestamp;
    telltaleTimestamp["ABS"] = "10:32:15";
    telltaleTimestamp["Airbag"] = "10:35:00";

    for (const auto& entry : telltaleTimestamp) {
        std::cout << entry.first << " -> " << entry.second << "\n";
    }

    /// 4. Category Mapping
    std::multimap<std::string, std::string> categoryMap;
    categoryMap.insert({"Brake", "ABS"});
    categoryMap.insert({"Safety", "Airbag"});
    categoryMap.insert({"Safety", "Seatbelt"});

    auto range = categoryMap.equal_range("Safety");
    std::cout << "Safety Telltales:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "- " << it->second << "\n";
    }

    /// 5. Notification Queue
    std::queue<std::string> notificationQueue;
    notificationQueue.push("ABS Activated");
    notificationQueue.push("Airbag Activated");

    while (!notificationQueue.empty()) {
        std::cout << "Notify: " << notificationQueue.front() << "\n";
        notificationQueue.pop();
    }

    /// 6. Recovery Stack
    std::stack<std::string> recoveryStack;
    recoveryStack.push("ABS");
    recoveryStack.push("Airbag");

    while (!recoveryStack.empty()) {
        std::cout << "Recovered: " << recoveryStack.top() << "\n";
        recoveryStack.pop();
    }

    /// 7. Emergency Priority Queue
    std::priority_queue<std::pair<int, std::string>,
                        std::vector<std::pair<int, std::string>>,
                        std::greater<>> emergencyQueue;

    emergencyQueue.push({1, "Brake Failure"});
    emergencyQueue.push({2, "Engine Overheat"});

    while (!emergencyQueue.empty()) {
        auto top = emergencyQueue.top();
        std::cout << "Emergency (" << top.first << "): " << top.second << "\n";
        emergencyQueue.pop();
    }
}



















