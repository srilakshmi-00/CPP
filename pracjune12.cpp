#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;\

//merge
void display (){
vector<int> num1{1,4,7,9};
vector<int> num2{2,5,8,10};
// vector<int> res(num1.size() + num2.size());
vector<int> res(8);
 merge(num1.begin(),num1.end(), num2.begin(), num2.end(),res.begin());
 cout << "The merge values are:";
for(auto it: res)
cout << it << " " ; 
}
int main()
{
    display();
    return 0;
}

//