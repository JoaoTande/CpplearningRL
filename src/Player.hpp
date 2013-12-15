#pragma once
#include "Actor.hpp"
#include "libtcod.hpp"

class Player : public Actor {
	public:
		bool getKey(TCOD_key_t key);
		void create();
		void update();
		void dispose();
		~Player(){}
		
		static Player& getInstance()
		{
			static Player _instance;
			return _instance;
		}
	
	private:
		Player() {}
		Player(const Player&);
		Player& operator=(const Player&);

};