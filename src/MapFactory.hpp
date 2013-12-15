#pragma once
#include "libtcod.hpp"
#include "GameObject.hpp"
#include "Actor.hpp"
#include "Engine.hpp"

class Map;

class MapFactory{
	public:

		Map *getMap(char type);

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

class Tile : public Actor{
	public:
		bool canWalk;
		void create();
		void dispose();
		void update();
		Tile(int X,int Y,char GLYPH,TCODColor FORE,TCODColor BACK, bool CANWALK)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			fore = FORE;
			back = BACK;
			canWalk = CANWALK;
		}
		Tile(int X,int Y,char GLYPH, bool CANWALK)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			fore = TCODColor::white;
			back = TCODColor::black;
			canWalk = CANWALK;
		}
		Tile(int X,int Y,char GLYPH)
		{
			x = X;
			y = Y;
			glyph = GLYPH;
			canWalk = true; 
			fore = TCODColor::white;
			back=TCODColor::black;
		}
};

class Map : public GameObject{
	public:
		virtual void create();
		void render();
		void dispose(delete [] board);
		virtual void update();
		inline void setTile(int x, int y,Tile t);
		inline Tile getTile(int x, int y);
		inline Tile getTile(int i);
	private: 
		Tile board[Engine::WIDTH * Engine::HEIGHT];

};
