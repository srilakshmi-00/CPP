#include <iostream>
#include <functional>
#include <string>
#include <memory>
using namespace std;

inline void log(const string& a){
    cout << "[LOG]" << a << endl;
}
class Contact{
    private:
    string name;
    string phoneNumber;
    public:
    Contact():name("unknown"),phoneNumber("N/A"){}
    Contact(const string& n, const string& p):name(n),phoneNumber(p){}
    Contact(const Contact& other):name(other.name),phoneNumber(other.phoneNumber){}
    Contact(Contact&& other)noexcept:name(move(other.name)),phoneNumber(move(other.phoneNumber)){}
    ~Contact() = default;
    void display() const{
        cout << name << " at " << phoneNumber<< endl;
    }
    string getName() const{
        return name;
    }
};
class PhoneBook{
    private:
    std::unique_ptr<Contact> contact1;
	std::unique_ptr<Contact> contact2;
	std::unique_ptr<Contact> contact3;
    public:
    PhoneBook(){}
    ~PhoneBook(){}
    void addContact(int position, const Contact& contact){
        unique_ptr<Contact>newContact =make_unique<Contact>(contact);
        switch(position){
            case 1: contact1= move(newContact); break;
            case 2: contact2= move(newContact);break;
            case 3: contact3= move(newContact); break;
        }
 
    }
    void callContact(int position) const{
        const Contact* c = nullptr;
        switch(position){
            case 1: c= contact1.get(); break;
            case 2: c= contact2.get();break;
            case 3: c= contact3.get();break;
        }
            if(c){
                cout<<"calling:";
                c->display();
            }
        }
        void showAllContacts() const{
            log("all contacts");
            if(contact1)  
            contact1-> display();
            if(contact2)  
            contact2-> display();
            if(contact3)  
            contact3-> display();
        }
        void customAction(int position, const function <void(const Contact&)>& action) const {
        const Contact* c = nullptr;
        switch (position) {
            case 1: c = contact1.get(); break;
            case 2: c = contact2.get(); break;
            case 3: c = contact3.get(); break;
        }
        if (c) {
            action(*c);
        }
    }
};
int main(){
    log("Starting Phone App...");
    Contact john("John Doe","+1234567890");
    Contact jane("Jane Smith","+1234564343");

    PhoneBook pb;
    pb.addContact(1, john);
    pb.addContact(2, jane);
    
    pb.callContact(1);
    pb.callContact(2);

    //pb.showAllContacts();
    auto sm =[](const Contact& c){
        cout<< "Custom Action: Message sent to " << c.getName()<<endl;
    };
    sm(john); 
}