//
// Created by Francesco Mazzola on 15/06/2020.
//

#include "IOSFactory.h"
#include "IOSButton.h"
#include "IOSWindow.h"

std::unique_ptr<Button> IOSFactory::createButton(std::string text) {
    return std::unique_ptr<iOSButton>(new iOSButton(text));
}
std::unique_ptr<Window> IOSFactory::createWindow(std::string title) {
    return std::unique_ptr<iOSWindow>(new iOSWindow(title));
}