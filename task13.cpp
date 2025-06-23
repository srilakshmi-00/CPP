#include <iostream>
#include <memory>  // For std::unique_ptr
using namespace std;

//  Enum class for mode types
enum class ModeType { Eco, Sport, Comfort };

class DrivingMode
{
public:
    virtual void activateMode() = 0;
    virtual ~DrivingMode(){}
};

class EcoMode: public DrivingMode
{
public:
    void activateMode() override
    {
        cout << "Eco Mode Activated: Fuel-efficient driving enabled.\n  ";
    }
};

class SportMode: public DrivingMode
{
public:
    void activateMode() override
    {
        cout << "Sport Mode Activated: Enhanced performance and acceleration.\n";
    }
};

class ComfortMode: public DrivingMode
{
public:
    void activateMode() override
    {
        cout << "Comfort Mode Activated: Smooth and relaxed driving experience.\n";
    }
};

class VehicleModeFactory
{
public:
    static unique_ptr<DrivingMode> createMode(ModeType  type)
    {
        switch(type)
        {
            case ModeType :: Eco:
                return make_unique<EcoMode>();
            case ModeType :: Sport:
                return make_unique<SportMode>();
            case ModeType :: Comfort:
                return make_unique<ComfortMode>();
            default :
            return nullptr;
        }
        
    }
};

int main()
{
    unique_ptr<DrivingMode> d1 = VehicleModeFactory::createMode(ModeType::Eco);
    unique_ptr<DrivingMode> d2 = VehicleModeFactory::createMode(ModeType::Sport);
    unique_ptr<DrivingMode> d3 = VehicleModeFactory::createMode(ModeType::Comfort);

    d1->activateMode();
    d2->activateMode();
    d3->activateMode();

    return 0;
} 