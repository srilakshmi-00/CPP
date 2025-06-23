#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

class HMIEventLogger
{
public: 
    static HMIEventLogger* instance;
    virtual void speedometerModule()= 0;
    virtual void fuelGaugeModule()= 0;
    virtual void checkEngineModule()= 0;
    virtual void airbagWarningModule()= 0; 
    virtual ~HMIEventLogger(){}
};


class threadsafe:public HMIEventLogger
{
public:
    void logInfo(const string& Info)
    {
        lock_guard<mutex> lock();
        cout << "[INFO]" << Info <<endl;
    }
    void logWarning(const string& Warning)
    {
        lock_guard<mutex> lock();
        cout << "[WARNING]" << Warning <<endl;
    }
    void logError(const string& Error)
    {
        lock_guard<mutex> lock();
        cout << "[ERROR]" << Error <<endl;
    }
};

class Speedometer: public HMIEventLogger
{
public:
    void speedometerModule() override
    {
       auto speed = HMIEventLogger* instance;
       speed->logInfo("[Speedmeter] speed updated to 80 km/h.");
       cout << speed<< endl;

       auto speed1 = HMIEventLogger* instance;
       speed1->logWarning("[Speedmeter] speed fluctuation dectected.");
       cout << speed1<< endl;

       auto speed2 = HMIEventLogger* instance;
       speed2->logInfo("[Speedmeter] speedometer sensor failure.");
       cout << speed2<< endl;
    }
};

class FuelGauge: public HMIEventLogger
{
public:
    void fuelGaugeModule() override
    {
        auto fuel = HMIEventLogger* instance;
        fuel-> logInfo("[FuelGauge] Fuel level at 60%." );
        cout << fuel<< endl;

        auto fuel1 = HMIEventLogger* instance;
        fuel1-> logWarning("[FuelGauge] Fuel level dropping quickly." );
        cout << fuel1<< endl;

        auto fuel2 = HMIEventLogger* instance;
        fuel2-> logError("[FuelGauge] Fuel sensor disconnected." );
        cout << fuel2<< endl;
    }
};

class CheckEngine: public HMIEventLogger
{
public:
    void checkEngineModule() override
    {
        auto check = HMIEventLogger* instance;
        check-> logInfo("[CheckEngine] Engine status normal." );
        cout << check<< endl;

        auto check1 = HMIEventLogger* instance;
        check1-> logWarning("[CheckEngine] Minor engine vibration detected." );
        cout << check1<< endl;

        auto check2 = HMIEventLogger* instance;
        check2-> logError("[CheckEngine] Engine fault code  P0301 triggered." );
        cout << check2<< endl;


       
    }
};

class AirbagWarning : public HMIEventLogger
{
public:
    void airbagWarningModule() override
    {
        auto air = HMIEventLogger* instance;
        air-> logInfo("[AirbagWarning] Airbag system armed.");
        cout << air << endl;

        auto air1 = HMIEventLogger* instance;
        air1-> logWarning("[AirbagWarning] Airbag diagnostic pending.");
        cout << air1 << endl;

        auto air2 = HMIEventLogger* instance;
        air2-> logError("[AirbagWarning] Airbag deployment failure.");
        cout << air2 << endl;

    }
};

int main()
{  
thread t1(speedometerModule);
t1.join();

thread t2(fuelGaugeModule);
t2.join();

thread t3(checkEngineModule);
t3.join();

thread t4(airbagWarningModule);
t4.join();


}