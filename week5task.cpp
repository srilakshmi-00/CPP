#include <iostream>
#include <vector> //required for vector
#include <deque>  //required for deque
#include <list>   //required for list
#include <string>
using namespace std;
/**
 * @brief Manages seat position presets for the vehicle.
 */
vector<string>SeatPositionPresetList;
void PostionPreset(const string seat){
    SeatPositionPresetList.push_back(seat);
}
void displaypostion(){
    for(const auto position: SeatPositionPresetList)  cout<<"displaying all available presets"<<position<<endl;
}
 
deque<string>UserInputEventQueue;
void EventQueue(const string event, bool HighPrority=false){
    if(HighPrority)
       UserInputEventQueue.push_front(event);
    else
      UserInputEventQueue.push_back(event);
}

void Process(){
    while(!UserInputEventQueue.empty())
    {
    UserInputEventQueue.pop_front();
    }
    }


list<string>SeatAdjustmentActionHistorywithFiltering;
void ActionHistory(const string& Action){
    SeatAdjustmentActionHistorywithFiltering.push_back(Action);
}
/**
     * @brief Removes the last action from the history (undo).
     */
void Undo(){
    cout<< "\n--- After Undo ---\n";
    SeatAdjustmentActionHistorywithFiltering.pop_back();
}
 void displayAction(){
    for(const auto position1: SeatAdjustmentActionHistorywithFiltering)  cout<<position1<<endl;
 }

/**
 * @brief Entry point of the program.
 * 
 * Demonstrates usage of SeatPresetManager, InputEventQueue, and ActionHistory.
 */

 int main(){
    //vector
    PostionPreset("Position 1: Height 10cm, Lumbar 5");
    PostionPreset("Position 2: Height 12cm, Lumbar 3");
    PostionPreset("Position 3: Height 8cm, Lumbar 7");
    PostionPreset("Position 4: Height 11cm, Lumbar 4");
    displaypostion();

    //deque
    EventQueue("AdjustHeight",false);
    EventQueue("AdjustLumbar",false);
    EventQueue("SavePosition",false);
    EventQueue("RecallPosition",false);
    EventQueue("DriverChange",true);
    EventQueue("SafetyLock",true);
    Process();

    //list
    ActionHistory("[Height] Adjust Height 10cm");
    ActionHistory("[Lumbar] Adjust Lumbar 5"); 
    ActionHistory("[General] Save Position");
    displayAction();
   
        Undo();
    displayAction();
   
 }