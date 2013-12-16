#pragma once
#include "Map.hpp"


class DebugMap : public Map {
	public:
		void create();
		DebugMap(){create();}
		~DebugMap(){}
		void update();
	private: 
		bool randomBool();
		void fill(); //There is most likely a way to do this in one loop but i'm not a mathematician
};