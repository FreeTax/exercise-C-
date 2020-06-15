//
// Created by Francesco Mazzola on 15/06/2020.
//

#include "WindowsFactory.h"
#include "WindowsButton.h"
#include "WindowsWindow.h"
std::unique_ptr<Window> WindowsFactory::createWindow(std::string title) {
    return std::unique_ptr<Window>(new WindowsWindow(title));
}

std::unique_ptr<Button> WindowsFactory::createButton(std::string text) {
    return std::unique_ptr<Button>(new WindowsButton(text));
}