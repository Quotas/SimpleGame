#pragma once
#include "Entity.h"
#include "Player.h"
#include "Level.h"
#include "TileMap.h"
#include <vector>


#define PLAYER_SPRITESHEET "filename"
#define MONSTER_SPRITESHEET "filename"
#define LANDSCAPE_SPRITESHEET "filename"




class GameManager
{
public:
	GameManager();
	bool newGame();
	void mainMenu();
	inline TileMap getMap() const { return m_map; }


private:
	std::vector<Entity> m_gameEntities;
	std::vector<Level> m_gameLevels;
	
	TileMap m_map;

	Player m_player;
	
	bool m_night = false;
	bool m_gameOver;








};
