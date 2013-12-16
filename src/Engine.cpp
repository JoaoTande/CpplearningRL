#include "libtcod.hpp"
#include "Engine.hpp"
#include "Player.hpp"
#include "MapFactory.hpp"
#include "Map.hpp"
void Engine::create(){
	TCODConsole::initRoot(Engine::WIDTH,Engine::HEIGHT,"RL",false);
    player.create();
    map = MapFactory::getInstance().getMap('d');
}

void Engine::update(){
    //Should be called before render
	TCOD_key_t key;
    TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS,&key,NULL);
    player.getKey(key);
    map->update();
}
void Engine::render(){
    //Called after update to put all the characters on the screen.
	TCODConsole::root->clear();
    map->render();
    player.render();
    TCODConsole::flush();
}
void Engine::dispose(){
    delete map;
}