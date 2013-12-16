#pragma once
#include "libtcod.hpp"
#include "Map.hpp"
#include "Maps.hpp"

class Map;

class MapFactory{
	public:

		Map * getMap(char type){
			
			switch(type){
				case 'd':
				Map* map = new DebugMap();
					return map;
			}
			return 0;
		}


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