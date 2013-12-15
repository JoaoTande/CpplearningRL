#pragma once
#include "Actor.hpp"
#include "libtcod.hpp"

class Player : public Actor {
	public:
		bool getKey(TCOD_key_t key);
		void create();
		void update();
		void dispose();
		static Player* getInstance();
	
	private:
		Player(){}
		static Player* _instance;

};