#include <iostream>
#include <queue>
using namespace std;

void dispaly()
{
    queue<int> values;
    values.push(19);
    values.push(87);
    values.push(15);
    values.push(43);
    cout<< values.front()<< endl; 
    cout<< values.back()<< endl;
    while(!values.empty())
    {
    cout << "the pushed values are: "<<values.front() <<  endl;
    values.pop();
    }
}
int main()
{
    dispaly();
    return 0;
}