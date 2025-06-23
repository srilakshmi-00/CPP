#include <iostream>
#include <map>
using namespace std;
class Set1{
    public:
    void display(){
        map<string, int> marks; 
        marks["sri"]=90;
        marks["lakshmi"]=95;
        marks["tirupatamma"]=80;
        cout << "the marks are: "<< marks["sri"] <<endl;
    }
};
int main(){
    Set1 s;
    s.display();
    return 0;
}