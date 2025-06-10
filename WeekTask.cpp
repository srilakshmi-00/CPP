#include <iostream>
using namespace std;
//1.Define a Base Class (AutonomousVehicle):
class AutonomousVehicle{
public:
    string vehicleType;
    int speed;
    int batteryLevel;
public:
    AutonomousVehicle(string type, int spd, int battery)
       : vehicleType(type), speed(spd), batteryLevel(battery) {}
    virtual void navigateRoute() = 0;         
    virtual void performSelfCheck() = 0;
    virtual ~AutonomousVehicle()
    {
        cout << "Destroying AutonomousVehicle: " <<vehicleType<<endl;
    }
};
//2.Create Derived Classes:
class ElectricCar:public AutonomousVehicle
{
public:
    ElectricCar(int spd, int battery)
        :AutonomousVehicle("ElectricCar",spd, battery) {}
    void navigateRoute() override
    {
        cout<< "the speed of ECar: "<<speed<<endl;
    }
    void performSelfCheck() override
    {
        cout<< "the batterylevel of ECar: "<<batteryLevel<<endl;
    }
    ~ElectricCar()
    {
        cout << "Destroying ECar"<<endl;
    }
};
class HybridCar:public AutonomousVehicle{
public:
    HybridCar(int spd, int battery)
        : AutonomousVehicle("HybridCar",spd, battery) {}
    void navigateRoute() override
    {
        cout<< "the speed of HCar: "<<speed<<endl;
    }    
    void performSelfCheck() override
    {
        cout<< "the batterylevel of HCar: "<<batteryLevel<<endl;
    }
    ~HybridCar()
    {
        cout << "Destroying HCar"<<endl;
    }
};
class AutonomousTruck:public AutonomousVehicle{
public:
    AutonomousTruck(int spd, int battery)
        : AutonomousVehicle("AutonomousTruck",spd, battery) {}
    void navigateRoute() override
    {
        cout<< "the speed of Atruck: "<<speed<<endl;
    }
    void performSelfCheck() override
    {
        cout<< "the batterylevel of ATruck: "<<batteryLevel<<endl;
    }
    ~AutonomousTruck()
    {
        cout << "Destroying ATruck"<<endl;
    }
};
//3.Create Objects of Derived Classes:
int main()
{
 // 4. Using Polymorphism
    AutonomousVehicle* v[3];

    v[0] = new ElectricCar(120, 85);
    v[1] = new HybridCar(100, 70);
    v[2] = new AutonomousTruck(80, 60);

    for (int i = 0; i < 3; ++i) 
    {
        v[i]->performSelfCheck();
        v[i]->navigateRoute();
        cout << endl;
    }
 // 5. Cleanup with Destructors
    for (int i = 0; i < 3; ++i)
    {
        delete v[i];
    }
return 0;
}
