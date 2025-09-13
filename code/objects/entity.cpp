#include"entity.hpp"

//constructors && destructors
Entity::Entity() {}
Entity::Entity( const char* path, float x, float y ) : x(x), y(y)
{
  this->sprite = ray::LoadTexture(path);
}
Entity::~Entity() {}

//setters
void Entity::setSprite( ray::Texture sprite )
{
  this->sprite = sprite;
}
void Entity::setSprite( const char* sprite )
{
  this->sprite = ray::LoadTexture(sprite);
}
void Entity::setx( float x )
{
  this->x = x;
}
void Entity::sety( float y )
{
  this->y = y;
}

//getters
ray::Texture Entity::getSprite()
{
  return this->sprite;
}
float Entity::getx()
{
  return this->x;
}
float Entity::gety()
{
  return this->y;
}

//member functions
void Entity::draw()
{
  ray::DrawTexture( getSprite(), getx(), gety(), ray::WHITE );
}
void Entity::draw( float x, float y )
{
  ray::DrawTexture( getSprite(), x, y, ray::WHITE );
}
