#include <iostream>
#include<vector>
#include<deque>
#include<string>
#include<list>
using namespace std;

vector<string>FavoriteRadioStationsManagement;
void favorite(string radio){
    FavoriteRadioStationsManagement.push_back(radio);
}
void displayfav(){
    cout <<"-------------"<<endl;
    for(auto event: FavoriteRadioStationsManagement)
    {
        cout<<"Displaying all favorite stations to the user:"<<event<<endl;
    }
}

deque<string>RealTimeNotificationQueue;
void notification(string time,bool HighPriority= false){
if(HighPriority)
{
    RealTimeNotificationQueue.push_front("URGENT:"+ time);
}
else{
    RealTimeNotificationQueue.push_back("NORMAL"+ time);
}
}
void displaytime(){
   cout <<"-------------"<<endl;
   for(auto event1: RealTimeNotificationQueue){
        cout<<"Displaying Real-Time Notification Queue:"<<event1<<endl;
    } 
}

list<string>NavigationInstructionHistory;
void navigation(string nav){
    NavigationInstructionHistory.push_back(nav);
}
void displaynavi(){
   cout <<"-------------"<<endl;
   for(auto event2: NavigationInstructionHistory){
        cout<<"Displaying full sequence of navigation steps:"<<event2<<endl;
    } 
}
void undo() {
    if (!NavigationInstructionHistory.empty()) {
        NavigationInstructionHistory.pop_back();
    }
}
int main(){
    //vector
    favorite("Radio mirchi:102.3");
    favorite("FM1:103.5");
    favorite("FM2: 105.5");
    displayfav();
    //deque
    notification("Bluetooth connected",false);
    notification("system update",true);
    notification("emergency",true);
    displaytime();
    //list
    navigation("start");
    navigation("turn");
    navigation("left");
    navigation("arrive");
    navigation("u-turn");
    undo();
    displaynavi();
}