#pragma once
#include "GameObject.hpp"
#include "Actor.hpp"
#include "Engine.hpp"
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
class CaveMap : public GameObject{
	public:
		CaveMap(){create()}
		~CaveMap(){delete [] board}
		void create();
		void render();
		void dispose();
		void update();
		void setTile(int x, int y,Tile t){
			board[x + y*Engine::WIDTH] = t;
		}
		Tile getTile(int x, int y){
			return tile[x+y*Engine::WIDTH];
		}
	private: 
		void randomFill();
		Tile board;

};
class Tile : public Actor{
	public:
		bool canWalk;
		void create();
		void dispose();
		void update();
		Tile(x,y,glyph,fore,back) : x(x),y(y),glyph(glyph),fore(fore),back(back){create()}
		Tile(x,y,glyph,canWalk) : x(x),y(y),glyph(glyph),canWalk(canWalk){create()}
		Tile(x,y,glyph) :x(x),y(y),glyph(glyph),canWalk(true){create()}
};