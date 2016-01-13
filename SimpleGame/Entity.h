#pragma once
#include <SFML/Graphics.hpp>

#define MAX_LIFE 100;


class Entity : public sf::Drawable
{
public:
	Entity() = default;
	Entity(sf::Sprite sprite, sf::Vector2f pos)
		:m_sprite(sprite), m_position(pos)
	{
		m_life = MAX_LIFE;
		m_physicalAttack = 0.f;
		m_magicAttack = 0.f;
	};
	Entity(sf::Sprite sprite, sf::Vector2f pos, int life)
		:m_sprite(sprite), m_position(pos), m_life(life)
	{
		m_physicalAttack = 0.f;
		m_magicAttack = 0.f;
	};
	Entity(sf::Sprite sprite, sf::Vector2f pos, int life, float physicalattack, float magicattack)
		:m_sprite(sprite), m_position(pos), m_life(life), m_physicalAttack(physicalattack), m_magicAttack(magicattack) {};
	bool isDead() const { return m_life == 0; }
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const { target.draw(m_sprite, states); }

private:
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	int m_life;
	float m_physicalAttack;
	float m_magicAttack;
	
	





};
