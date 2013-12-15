#pragma once
class GameObject{
    //A game object which can be used generically with standard interfaces
    public:
        virtual void create() =0 ;
        virtual void render()=0;
        virtual void update()=0;
        virtual void dispose()=0;
};