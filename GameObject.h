#pragma once

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <string>

class GameObject : public sf::Transformable
{
public:
	GameObject();
	GameObject(float x, float y, std::string filename);
	~GameObject();

private:
	sf::Vector2<float> coord;
	sf::Sprite s;

};

