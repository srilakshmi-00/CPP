#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void fi()
{
    vector<int> fin={12, 44, 65, 42, 87,31};
    auto it =find(fin.begin(), fin.end(), 87);
    if(it != fin.end())
    {
        cout  << *it <<":founded" << endl;
    }
    else{
        cout << "not found:" << *it << endl;
    }
}

int main(){
    fi();
    return 0;
}