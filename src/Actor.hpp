#pragma once
#include "GameObject.hpp"
#include "libtcod.hpp"

class Actor : public GameObject{
	public:
		~Actor(){};
		Actor(){}
		virtual void create()=0;
		void render(){
			TCODConsole::root->putCharEx(x,y,glyph,fore,back);
		}
		virtual void update()=0;
		virtual void dispose()=0;
		inline int getX(){
			return x;
		}
		inline int getY(){
			return y;
		}
		inline void setX(int  x_val){
			x = x_val;
		}
		inline void setY(int  y_val){
			y = y_val;
		}
		inline int getGlyph(){
			return glyph;
		}
		inline void setGlyph(int glyph_val){
			glyph = glyph_val;
		}

	protected:
		int x,y;
		int glyph;
		TCODColor fore;
		TCODColor back;


};