#include "GameObject.h"
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

#include <string>



GameObject::GameObject(){
	coord = sf::Vector2(0, 0);
}

GameObject(float x, float y, std::string filename){

}

GameObject::~GameObject()
{
}
