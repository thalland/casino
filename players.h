#ifndef __players_h
#define __players_h

#include <iostream>
#include <list>
#include "player.h"

class Players {

	protected:
		std::list <Player*> players;
		int lastNumber;

	public:
		Players();
		~Players();
		int getLastNumber() { return lastNumber; }
		Player* getPlayer(int num);
		void newPlayer();
		bool noPlayers();
		void deletePlayer();
		void allPlayersDetailed();
		void allPlayersSimple();

};





#endif
