#pragma once
#include "GameObject.hpp"
#include "Actor.hpp"
class MapFactory{
	public:

		Map* getMap(char type);

		static MapFactory& getInstance()
		{
			static MapFactory _instance;
			return _instance;
		}
	private:
		MapFactory() {}
		MapFactory(const MapFactory&);
		MapFactory& operator=(const MapFactory&);

	
};
class Map : public GameObject{
	void create();
	void render();
	void dispose();
	void update();
};
class Tile : public Actor{
	void create();
	void dispose();
	void update();
	Tile(x,y,glyph,fore,back) : x(x),y(y),glyph(glyph),fore(fore),back(back){create()}
	Tile(x,y,glyph) : x(x),y(y),glyph(glyph){create()}
};