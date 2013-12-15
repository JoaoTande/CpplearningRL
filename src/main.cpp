#include "libtcod.hpp"
#include "Engine.hpp"
int main() {

    Engine engine;
    engine.create();
    while ( !TCODConsole::isWindowClosed() ) {
        engine.update();
        engine.render();
        
    }
    return 0;
}