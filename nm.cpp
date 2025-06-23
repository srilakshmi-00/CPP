#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void nm()
{
    // adjacent_find
    vector<int> adj={99, 21, 55, 55, 19};
    auto it =adjacent_find(adj.begin(), adj.end());
    if(it != adj.end()) 
    {
        cout << distance(adj.begin(),it)<<" is the index for "<< *it << " and this is adjacent_find program." << endl;
    }
    else{
        cout << "no values" << *it << endl;
    } 
}

void nm1()
{
    //count
    vector<int> cou = {1, 34, 56, 56 , 56 ,56, 78, 82 };
    auto it = count(cou.begin(), cou.end(), 56);
    cout << it << " times and this is count program.\n"; 
 
}
 
void nm2()
{
    //count_if
    vector<int> couif = { 23,54,89,54,54,89};
    auto it= count_if(couif.begin(), couif.end(), [](int &n) {return n > 23 ;});
    cout << it<< " times and this is count_if program.\n";

}  

void nm3()
{
    //equal
    vector<int> equ = { 32, 44, 43, 76, 87};
    vector<int> equ1 = { 32, 44, 43, 76, 87};
    auto it= equal(equ.begin(), equ.end(),equ1.begin());
    cout <<"both are " << (it ? "equal." : "not equal.");
}  

int main()
{
    nm();
    nm1();
    nm2();
    nm3();
    return 0;
}