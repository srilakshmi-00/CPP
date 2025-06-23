#include <iostream>
#include <map>
using namespace std;
class Set1{
    public:
    void display(){
        multimap<int, string > marks; 
        marks.insert({90,"A"});
        marks.insert({95,"+A"});
        marks.insert({80,"B"});
        marks.insert({90,"A"});
        cout << "the marks are: "<<endl;
        for(auto x: marks){
        cout <<"roll number:"<< x.first<< " | grade:"<< x.second << endl; 
    }
}
};
int main(){
    Set1 s; 
    s.display();
    return 0;
}