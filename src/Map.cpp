#pragma once
#include "libtcod.hpp"
#include "MapFactory.hpp"
#include "Maps.hpp"
#include "Engine.hpp"




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
void Map::setTile(int i, Tile t){
	board[i] = t;
}
Tile Map::getTile(int i){
	return board[i];
}
void Map::render(){
	for(unsigned i = 0; i < Engine::WIDTH * Engine::HEIGHT; ++i) {
		getTile(i).render();

	}
}