#pragma once
#include "libtcod.hpp"
#include "Engine.hpp"
#include "Player.hpp"

void Engine::create(){
	TCODConsole::initRoot(Engine::WIDTH,Engine::HEIGHT,"RL",false);
    player = Player::getInstance();
}

void Engine::update(){
    //Should be called before render
	TCOD_key_t key;
    TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS,&key,NULL);
    player->getKey(key);
}
void Engine::render(){
    //Called after update to put all the characters on the screen.
	TCODConsole::root->clear();
    player->render();
    TCODConsole::flush();
}

void Engine::dispose(){
    
}