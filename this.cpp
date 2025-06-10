#include <iostream>
using namespace std;
int main()
{
    int n;
    int mid;
    int a[] = { 2, 4, 6, 8, 9, 10 };
    int key = 9;
    int l = 0;
    int r = n - 1;
    while(l<r){
        mid = l + r / 2;
        if(key == a[mid])
        {
            cout << mid <<endl;
        }
        else if(key < a[mid]){
            cout << mid + 1 << endl;
        }
        else{
            cout << mid - 1 << endl;
        }
    }
    return -1;

}
