#include "libtcod.hpp"
#include "MapFactory.hpp"

Map* MapFactory::getMap(char type){
	switch(type){
		case 'c': return 0;
	}return 0;
}

void Tile::create(){

}
void Tile::dispose(){

}
void Tile::update(){
	//todo: add changing tiles maybe?
}

void Map::setTile(int x, int y, Tile t){
	board[x*Engine::WIDTH + y] = t;

}
Tile Map::getTile(int x, int y){
	return board[x*Engine::WIDTH + y];
}
Tile Map::getTile(int i){
	return board[i];
}
void Map::render(){
	for(unsigned i = 0; i < Engine::WIDTH * Engine::HEIGHT; ++i) {
		getTile(i).render();

	}
}