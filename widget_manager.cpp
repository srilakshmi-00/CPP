#include "widget_manager.h"

int globalWidgetConfig = 42;

unique_ptr<Widget> createWidget(WidgetType Type) {
    static int widgetCounter = 0;
    cout << "Creating Widget number " << ++widgetCounter << endl;
    switch (Type) {
        case WidgetType::Button:
            return make_unique<Button>();
        case WidgetType::Label:
            return make_unique<Label>();
        default:
            return nullptr;
    }
}

Widget::~Widget() {
    cout << "Destroying Widget base\n";
}

void Button::draw() const {
    cout << "Drawing a Button widget\n";
}

Button::~Button() {
    cout << "Destroying Button\n";
}

void Label::draw() const {
    cout << "Drawing a Label widget\n";
}

Label::~Label() {
    cout << "Destroying Label\n";
}

void HMIWidgetManager::addWidget(unique_ptr<Widget> widget) {
    auto sharedWidget = shared_ptr<Widget>(std::move(widget));
    widgets.push_back(sharedWidget);
}

shared_ptr<Widget> HMIWidgetManager::getWidget(size_t index) {
    if (index < widgets.size()) {
        return widgets[index];
    }
    return nullptr;
}

void HMIWidgetManager::drawAllWidgets() const {
    for (const auto& widget : widgets) {
        widget->draw();
    }
}
