#include "widget_manager.h"

void displaySharedWidget(shared_ptr<Widget> widget) {
    cout << "Shared access to widget:\n";
    widget->draw();
}

int main() {
    cout << "Global config value: " << globalWidgetConfig << "\n";

    HMIWidgetManager manager;

    auto widget1 = createWidget(WidgetType::Button);
    auto widget2 = createWidget(WidgetType::Label);

    manager.addWidget(std::move(widget1));
    manager.addWidget(std::move(widget2));

    manager.addWidget(createWidget(WidgetType::Button));

    shared_ptr<Widget> shared = manager.getWidget(1);
    if (shared) {
        displaySharedWidget(shared);
    }

    cout << "\nDrawing all widgets:\n";
    manager.drawAllWidgets();

    cout << "\nExiting main...\n";
    return 0;
}
