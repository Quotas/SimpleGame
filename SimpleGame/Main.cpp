#include "Screen.h"
#include "GameManager.h"


int main()
{
	auto *screen = new Screen(512, 256, "TestGame");
	auto *game = new GameManager();

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

		screen->clear(sf::Color::Black);
		screen->draw(game->getMap());
		screen->display();
	}

	return 1;
}