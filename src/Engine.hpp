#pragma once
#include "GameObject.hpp"
#include "Player.hpp"

class Engine : public GameObject{
public:
	static const int WIDTH = 80;
	static const int HEIGHT = 50;
	void create();
	void render();
	void update();
	void dispose();
private:
	Player & player = Player::getInstance();
};