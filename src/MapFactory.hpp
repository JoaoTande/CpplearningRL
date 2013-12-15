#pragma once
#include "GameObject.hpp"

class MapFactory : public GameObject{
	
};
class Map : public GameObject{
	void create();
	void render();
	void dispose();
	void update();
};
class Tile : public GameObject{
	void create();
	void render();
	void dispose();
	void update();
};