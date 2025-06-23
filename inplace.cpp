#include <iostream>
#include <array> //required for array
#include <algorithm>
using namespace std;
 
int main()
{
    array<int, 6> numbers = {1,5,7,2,6,9};
    inplace_merge(numbers.begin(), numbers.begin()+3, numbers.end());
    cout << "inplace_merge: ";
    for(auto num: numbers)
    cout << num << "  ";
    cout << endl;

    cout << "reverse: ";
    reverse(numbers.begin(), numbers.end());
    for(auto num1: numbers)
    cout  << num1 << "  ";
}
