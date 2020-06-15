#include <iostream>
#include "Window.h"
#include "Button.h"

#include "WidgetFactory.h"
#include "WindowsFactory.h"

// TODO try compiling commenting the next define...
#define _WIN64

int main() {
    std::unique_ptr<WidgetFactory> guiFactory;

#ifdef _WIN64
    guiFactory= std::unique_ptr<WindowsFactory>(new WindowsFactory());
#else
    guiFactory= std::unique_ptr<IOSFactory>(new iOSFactory());

#endif

    std::unique_ptr<Button> button (guiFactory->createButton("Click"));

    // TODO create a "Click" button (object name: button)
    std::unique_ptr<Window> window (guiFactory->createWindow("Game name"))
    // TODO create a "Game name" window (object name: window)
    button->draw();
    window->draw();
    // TODO draw button and window
     
    // TODO resize window and set icon on button

    return 0;
}
