#include <iostream>
using namespace std;
// eligible or not 
// int main()
// {
//     int age = 20;
//     if(age >= 18)
//     {
//         cout<< "eligible";

//     }
//     else
//     {
//         cout << " not eligible";
//     }
// return 0;
// }


// eligible or not from user
// int main()
// {
//     int age;
//     cout<< "enter number : " << endl;
//     cin >> age; 
//     if(age >= 18)
//     {
//         cout<< "eligible";

//     }
//     else
//     {
//         cout << " not eligible";
//     }
// return 0;

// }


// prime or not(if)
// int main(){
//     int n;
//     cout << "enter the number: ";
//     cin >> n; 
//     if( n % n == 0 and n % 2 != 0)
//         {
//             cout <<n << "  prime";
//         }
//         else{
//             cout << n << " not prime";
//         }
//     }


// for loop (prime)
int main(){
    int i;
    int n=5;
    for(i=1; i<=n; i++){
        if( i % n == 0 and i % 2 != 0)
        {
            cout << i << "  prime"<< endl;
        }
        else{
            cout << i << " not prime" << endl;
        }
    }
return 0;
} 