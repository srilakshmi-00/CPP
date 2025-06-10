#ifndef WIDGET_MANAGER_H
#define WIDGET_MANAGER_H
#include <iostream>
#include <memory>
#include <vector>
using namespace std;
class Widget{
public:
     virtual ~Widget()
    {
        cout<<"Widget object is destroyed."<<endl;
    }   
        
    virtual void draw() const =0;
};
class Button: public Widget{
public:
    void draw() const override
    {
        cout<<" button widget is drawing."<<endl;
    }
    ~Button();
};
class Label: public Widget{
public:
    void draw() const override
    {
        cout<<" label widget is drawing."<<endl;
    }
    ~Label();
};
enum class WidgetType
{
    Button,
    Label
};
unique_ptr<Widget> createWidget(WidgetType Type);

class HMIWidgetManager {
public:
    void addWidget(unique_ptr<Widget> widget);
    shared_ptr<Widget> getWidget(size_t index);
    void drawAllWidgets() const;
private:
    vector<shared_ptr<Widget>> widgets;
};

extern int globalWidgetConfig;

#endif