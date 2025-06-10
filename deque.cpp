#include <iostream>
#include <queue>
using namespace std;
int main(){ 
deque<int> numbers;
numbers.push_back(177);
numbers.push_back(567);
numbers.push_front(86);
numbers.push_back(705);
numbers.push_back(65);

cout << "elements after push:";
for(int i= 0;i<numbers.size();i++)
{
    cout<<numbers[i]<<" ";
}
cout<<endl;

cout<<"The element operator:"<< numbers[3]<<endl;

cout<<"The element in front:"<< numbers.front()<<endl;

cout<<"The element in back:"<< numbers.back()<<endl;

cout<<"element at index 2:"<< numbers.at(2)<<endl;

numbers.erase(numbers.begin()+1);
numbers.pop_back();
numbers.pop_front();
cout<<"after  element :";

numbers.insert(numbers.begin()+2,111);
numbers.resize(6,99);
for(auto num : numbers){
    cout<<num<<" ";
}
cout<<endl;
cout<<"the size:"<<numbers.size()<<endl;


cout << "Reversed vector: ";
for (auto it = numbers.rbegin(); it != numbers.rend();++it) {
        cout <<*it << " ";
    }
cout<<endl;

    return 0;
}