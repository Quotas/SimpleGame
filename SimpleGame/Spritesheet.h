#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>



class Spritesheet
{
public:
	Spritesheet();
	void loadSpriteSheet(std::string filename);
	sf::Sprite getSprite(int x, int y, int width, int height);

private:
	sf::Texture m_spritesheet;



};