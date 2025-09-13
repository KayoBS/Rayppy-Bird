#ifndef ENTITY_HPP_INCLUDED
#define ENTITY_HPP_INCLUDED

namespace ray
{
  #include<raylib.h>
}

class Entity
{
  private:
    ray::Texture sprite;
    float x, y;

  public:
    //constructors && destructors
    Entity();
    Entity( const char* path, float x, float y );
    ~Entity();

    //setters
    void setSprite( ray::Texture sprite );
    void setSprite( const char* sprite );
    void setx( float x );
    void sety( float y );

    //getters
    ray::Texture getSprite();
    float getx();
    float gety();

    //member functions
    void draw();
    void draw( float x, float y );
};

#endif
