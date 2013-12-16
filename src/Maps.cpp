#include "Maps.hpp"
#include "Engine.hpp"
#include "stdlib.h"


void DebugMap::create(){
	fill();
}

bool DebugMap::randomBool(){
	return rand() % 2 == 1;
}

void DebugMap::fill(){
	for(unsigned x = 0; x < Engine::WIDTH; ++x) {
		for(unsigned y = 0; y < Engine::HEIGHT; ++y) {
			bool TileType = randomBool();
			int glyph;
			bool walkable;
			if(TileType){
				glyph = 42;
				walkable = true;
			}
			else{
				glyph = 43;
				walkable = false;
			}
			Tile tile = Tile(x,y,glyph);
			setTile(x,y,tile);
		}
	}
}