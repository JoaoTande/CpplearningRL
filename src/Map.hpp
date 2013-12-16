#pragma once
#include "libtcod.hpp"
#include "Actor.hpp"
#include "MapFactory.hpp"
#include "Engine.hpp"

class Tile : public Actor{
	public:
		bool canWalk;
		void create();
		void dispose();
		void update();
		Tile(){}
		Tile(int X,int Y,int GLYPH,TCODColor FORE,TCODColor BACK, bool CANWALK)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			fore = FORE;
			back = BACK;
			canWalk = CANWALK;
			create();
		}
		Tile(int X,int Y,int GLYPH, bool CANWALK)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			fore = TCODColor::white;
			back = TCODColor::black;
			canWalk = CANWALK;
			create();
		}
		Tile(int X,int Y,int GLYPH)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			canWalk = true; 
			fore = TCODColor::white;
			back=TCODColor::black;
			create();
		}
};

class Map : public GameObject{
	public:
		
		virtual void create();
		void render();
		void dispose(){delete [] board;}
		~Map(){dispose();}
		Map(){}
		virtual void update();
		void setTile(int x, int y,Tile t);
		Tile getTile(int x, int y);
		void setTile(int i, Tile t);
		Tile getTile(int i);
	private: 
		Tile board[80 * 50]; //todo this should be from engine

};
