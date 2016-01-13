#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Screen : public sf::RenderWindow
{
public:
	Screen() = default;
	virtual ~Screen();
	Screen(int width, int height, std::string title)
		: m_width(width), m_height(height), m_title(title)
	{
		create(sf::VideoMode(m_width, m_height), m_title);

	};
	inline int getWidth() const { return m_width; }
	inline int getHeight() const { return m_height; }
	bool pollEvents() { return pollEvent(m_events); }
	bool shouldClose() const { return m_events.type == sf::Event::Closed; }

	
	

private:

	sf::Event m_events;
	int m_width, m_height;
	std::string m_title;


};


