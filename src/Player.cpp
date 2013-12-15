#include "libtcod.hpp"
#include "Player.hpp"
#include "Engine.hpp"

bool Player::getKey(TCOD_key_t key){
	switch(key.vk) {
            case TCODK_UP : y--; return true;
            case TCODK_DOWN : y++; return true;
            case TCODK_LEFT : x--; return true;
            case TCODK_RIGHT : x++; return true;
            default:return false;
     }

}
void Player::create(){
	x = Engine::WIDTH/2;
	y = Engine::HEIGHT/2;
	glyph= 64;
	fore = TCODColor::white;
	back = TCODColor::black;
}
void Player::update(){

}
void Player::dispose(){

}
