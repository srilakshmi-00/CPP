#include <iostream>
#include <queue>
using namespace std;

void dis()
{
    priority_queue<int> values;
    values.push(19);
    values.push(87);
    values.push(95);
    values.push(43);
   
    while(!values.empty())
    {
    cout << "the pushed values are: " <<  values.top() << endl;
    values.pop();
    cout<< "the size: "<< values.size()<< endl;
    }
}
int main()
{
    dis();
    return 0;
}