#include <iostream>
#include <stack>
using namespace std;

void stack1()
{
    stack<int> values;
    values.push(90);
    values.push(87);
    values.push(65);
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
    stack1();
    return 0;
}