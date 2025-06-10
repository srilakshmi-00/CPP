#include <iostream>
#include <vector>
using namespace std;
int main(){ 
vector<int> numbers;
numbers.push_back(100);
numbers.push_back(90);
numbers.push_back(80);
numbers.push_back(70);
numbers.push_back(60);

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
numbers.reserve(10);

numbers.erase(numbers.begin()+1);
numbers.pop_back();
cout<<"after  element :";

numbers.insert(numbers.begin()+2,121);
numbers.resize(6,99);
for(auto num : numbers){
    cout<<num<<" ";
}
cout<<endl;
cout<<"the size:"<<numbers.size()<<endl;
cout<<"the capacity:"<<numbers.capacity()<<endl;

cout << "Reversed vector: ";
for (auto it = numbers.rbegin(); it != numbers.rend();++it) {
        cout <<*it << " ";
    }
cout<<endl;
 // Swap with another vector
    vector<int> number1 = {1, 2, 3,6,9,0};
    numbers.swap(number1);

    cout << "After swap:\nnumbers: ";
    for (int val : numbers) cout << val << " ";

    cout << "\nnumber1: ";
    for (int val : number1) cout << val << " ";

    return 0;
}