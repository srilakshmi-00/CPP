// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class non_mod
// {
//     vector<int> numbers;
//     public:
//     void fore()
//     {
//         numbers = {14, 43, 37, 89, 57};
      
//     }
//     void display(){
        
//         for_each(numbers.begin(), numbers.end(), [](int &x){
//             cout << "the values are: " << x << endl;
//         });
        
//     }
// };

// int main()
// {
//     non_mod nm;
//     nm.fore();
//     nm.display();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers;
void fore()
{
    numbers = {4, 3, 7, 8, 5};
}
void display()
{
    for_each(numbers.begin(), numbers.end(), [](int &n){
        cout << "the values are: " << n << endl;
    });
}

int main()
{
    fore();
    display();
    return 0;
}
                                                              