// manual
//#include <iostream>
// #include <set>
// using namespace std;
// class Set1{
//     public:
//     void display(){
//         set<int> num={1,2,3,3,4,5};
//         for(int val:num)
//         cout << "the values are: "<< val << " "<<endl;
//     }
// };
// int main(){
//     Set1 s;
//     s.display();
//     return 0;
// }

//user
#include <iostream>
#include <set>
using namespace std;
class Set1{
    public:
    void display(){
        set<int> num_set;
        int num;  
        cout<<"enter numbers:";
        while(true){
            
            cin >> num; 
            if(num == -1){
                break;
            } 
            num_set.insert(num); 
     }
     for(auto val:num_set)
        cout << val << " ";
   
    }
};
int main()
{
    Set1 s;
    s.display();
    return 0;
}


