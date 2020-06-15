//
// Created by Francesco Mazzola on 15/06/2020.
//

#ifndef E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSFACTORY_H
#define E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSFACTORY_H


#include "WidgetFactory.h"

class WindowsFactory: public WidgetFactory {
public:
    virtual std::unique_ptr<Button> createButton (std:: string text) override;
    virtual std::unique_ptr<Window> createWindow(std::string title) override;
};


#endif //E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSFACTORY_H
