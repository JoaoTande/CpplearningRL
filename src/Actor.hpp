#pragma once
#include "GameObject.hpp"
#include "libtcod.hpp"

class Actor : public GameObject{
	public:
		Actor(){}
		~Actor(){}
		virtual void create();
		void render(){
			TCODConsole::root->putChar(x,y,glyph);
		}
		virtual void update();
		virtual void dispose();
		inline float getX(){
			return x;
		}
		inline float getY(){
			return y;
		}
		inline void setX(float x_val){
			x = x_val;
		}
		inline void setY(float y_val){
			y = y_val;
		}
		inline char getGlyph(){
			return glyph;
		}
		inline void setGlyph(char glyph_val){
			glyph = glyph_val;
		}

	protected:
		float x,y;
		char glyph;
		TCODColor fore;
		TCODColor back;


};