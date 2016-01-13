#include "GameManager.h"

GameManager::GameManager()
{
	m_gameOver = false;

	int *level = new int[3600];
	for (int i = 0; i < 3600; i++)
	{
			level[i] = rand() % 20; 
	}

	m_map.load("./Assests/Wood16.png", sf::Vector2u(16, 16), level, 80, 45);
}

bool GameManager::newGame()
{
	return false;
}

void GameManager::mainMenu()
{
}

