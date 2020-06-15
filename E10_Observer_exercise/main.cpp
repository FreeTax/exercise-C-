#include "GameCharacter.h"
#include "VideogameMapView.h"
#include "MiniMapView.h"

// enum class game event
enum class GameEvent {
    quit, left, up, down, right, minimap, noop
};

class GameApp {
public:
    GameApp();
    bool updateGame(const GameEvent &gameEvent);
    GameEvent getEvent();

    void renderHUD();

private:
    VideogameMapView* mainMap;
    MiniMapView* miniMap;
    GameCharacter* hero;
    bool isMinimapOpen;

    void OpenCloseMinimap();
};

// render Head Up Display
void GameApp::renderHUD() {
    std::cout << "Press: w,a,s,d (to move), m (show/close minimap) or Q to quit." << std::endl;
}

GameApp::GameApp() {
    hero = new GameCharacter;

    mainMap = new VideogameMapView( hero );
    miniMap = new MiniMapView( hero );
    isMinimapOpen = true;
}

// poll event from keyboard
GameEvent GameApp::getEvent() {
    char c;
    while (std::cin.get(c)) {
        std::cin.ignore(100, '\n');
        switch (c) {
            case 'Q':
                return GameEvent::quit;
            case 'w':
                return GameEvent::up;
            case 'a':
                return GameEvent::left;
            case 's':
                return GameEvent::down;
            case 'd':
                return GameEvent::right;
            case 'm':
                return GameEvent::minimap;
            default:
                return GameEvent::noop;
        }
    }
    return GameEvent::noop;
}

void GameApp::OpenCloseMinimap() {
    if (isMinimapOpen) {
        delete miniMap;
        isMinimapOpen = false;
    } else {
        miniMap = new MiniMapView(hero);
        isMinimapOpen = true;
        // TODO refresh minimap view
    }
}

// update game status depending on player's action
bool GameApp::updateGame(const GameEvent &gameEvent) {
    switch (gameEvent) {
        case GameEvent::quit: //
            return true;
        case GameEvent::up: {
            // graphics coordinates: (0,0) is top-left
            hero->move(0, -1);
            break;
        }
        case GameEvent::left: {
            hero->move(-1, 0);
            break;
        }
        case GameEvent::down: {
            // graphics coordinates: (0,0) is top-left
            hero->move(0, 1);
            break;
        }
        case GameEvent::right: {
            hero->move(1, 0);
            break;
        }
        case GameEvent::minimap: {
            OpenCloseMinimap();
            break;
        }
        case GameEvent::noop: {
            renderHUD();
            break;
        }
    }
    return false;
}

int main() {
    GameApp game;
    game.renderHUD();
    while (true) {
        // poll event
        GameEvent gameEvent = game.getEvent();

        // update game status
        bool quit = game.updateGame(gameEvent);
        if (quit)
            return 0;
    }
}