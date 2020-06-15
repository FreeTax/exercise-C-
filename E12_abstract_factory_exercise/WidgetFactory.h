#ifndef ABSTRACT_FACTORY_WIDGETFACTORY_H
#define ABSTRACT_FACTORY_WIDGETFACTORY_H

#include "Button.h"
#include "Window.h"
#include <string>

class WidgetFactory {
public:
    virtual std::unique_ptr<Button> createButton(std::string text)=0;
    virtual std::unique_ptr<Window> createWindow(std::string title)=0;
    // TODO create two methods to instantiate button and Window widgets
    // TODO use smart pointers
};

#endif //ABSTRACT_FACTORY_WIDGETFACTORY_H
