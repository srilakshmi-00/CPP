#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void nm_find_if()
{
    vector<int> fin={12, 44, 65, 42, 87,31};
    auto it =find_if(fin.begin(), fin.end(), [](int &num){return num > 31;});
    if(it != fin.end())
    {
        cout  << *it <<" is greater than 31.";
    }
    else{
        cout << "no values" << *it << endl;
    }
}

int main()
{
    nm_find_if();
    return 0;
}