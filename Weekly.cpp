/**
 * @brief Automotive HMI Telltale Management Module
 */

#include <iostream>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iterator>
#include <string>
using namespace std;

void UniqueActiveTelltales()
{
    cout<< "\n---part-1:Unique Active Telltales---\n";
    set<string>UniqueActive;
    UniqueActive.insert("ABS");
    UniqueActive.insert("Airbag");
    UniqueActive.insert("Low Fuel");
    
    for(auto it= UniqueActive.begin();it!= UniqueActive.end();it++){
        cout <<"displaying all active telltales on screen:" <<*it << endl;
        UniqueActive.erase("Low Fuel");
    }
UniqueActive.clear();  
}

void TelltaleFrequencyTracker()
{
    cout<< "\n---part-2: Telltale Frequency Tracker---\n";
    multiset<string> telltale;
    telltale.insert("ABS");
    telltale.insert("ABS");
    telltale.insert("Airbag");

    cout << "ABS count: " << telltale.count("ABS") << endl;
    for(auto it : telltale)
    cout << "Display complete telltale activation history:"<< it<<endl;
}   

void TelltaletoTimestampMapping()
{
    cout<< "\n---part-3: Telltale to Timestamp Mapping---\n";
    map<string, string>timestamp;
    timestamp["ABS"] = "10:32:15";
    timestamp["Airbag"] = "10:35:00";

    for (const auto& entry : timestamp) {
        cout << entry.first << " -> " << entry.second << "\n";
    }
}


void TelltaleCategoryMapping()
{
   cout<< "\n---part-4: Telltale Category Mapping---\n"; 
   multimap<string, string>telltalecategory;
   telltalecategory.insert({"Brake System", "ABS"});
   telltalecategory.insert({"Safety","Airbag"});
   telltalecategory.insert({"Safety","doorclose"});

   string specificcategory = " Safety";
   cout << "\nEntry category for telltale:\n";
   auto range = telltalecategory.equal_range("Safety");
   for (auto it = range.first; it!=range.second; it++) {
        cout << " ->" << it->second<< endl;
    }
}

void TelltaleNotificationQueue()
{
    cout<< "\n---part-5: Telltale Notification Queue---\n"; 
    queue<string> telltalenotification;
    telltalenotification.push("Airbag Activated");
    telltalenotification.push("ABS Activated");

    while (!telltalenotification.empty()) {
        cout << "Notify: " << telltalenotification.front() << endl;
        telltalenotification.pop();
    }
}

void TelltaleRecoveryHistory()
{
    cout<< "\n---part-6: Telltale Recovery History---\n"; 
    stack<string> telltalerecovery;
    telltalerecovery.push("Airbag");
    telltalerecovery.push("ABS");

    while (!telltalerecovery.empty()) {
        cout << "Recovered: " <<telltalerecovery.top() << "\n";
        telltalerecovery.pop();
    }

}

void EmergencyTelltaleQueue()
{
    cout<< "\n---part-7: Emergency Telltale Queue---\n"; 
    priority_queue<pair<int, string>> telltaleemergency;
    telltaleemergency.push({1, "Brake Failure"});
    telltaleemergency.push({2, "Engine Overheat"});
    while (!telltaleemergency.empty()) {
        auto et = telltaleemergency.top();
        cout << "Emergency (" << et.first << "): " << et.second << "\n";
        telltaleemergency.pop();
    }
}

int main()
{
    UniqueActiveTelltales();
    TelltaleFrequencyTracker();
    TelltaletoTimestampMapping();
    TelltaleCategoryMapping();
    TelltaleNotificationQueue();
    TelltaleRecoveryHistory();
    EmergencyTelltaleQueue();
    return 0;
}

