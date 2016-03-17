#include "Screen.h"
#include "GameManager.h"
#include <sstream>


int main()
{
	auto *screen = new Screen(1280, 720, "TestGame");
	auto *game = new GameManager();
	screen->setFramerateLimit(0);
	screen->setVerticalSyncEnabled(false);

	sf::Clock clock;
	float lastTime = 0;
	float currentTime = 0;
	std::ostringstream tmp;
	std::string fps;
	int frames = 0;

	while (screen->isOpen())
	{

		while (screen->pollEvents())
		{

			if (screen->shouldClose()) {
				screen->close();
				delete screen;
				return 1;
			}
		}

		currentTime += clock.restart().asMilliseconds();
		if (currentTime >= 1000) 
		{
			tmp << "FPS: " << frames;
			fps = tmp.str();
			tmp.str("");
			screen->setTitle(fps);
			frames = 0;
			currentTime = 0;
		}


		screen->clear(sf::Color::Black);
		screen->draw(game->getMap());
		screen->display();
		frames++;
	}

	return 1;
}