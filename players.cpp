#include <iostream>
#include "players.h"
#include "player.h"


using namespace std;

Players::Players() {

	lastNumber = 1;

}

Players::~Players() {


}

Player* Players::getPlayer(int num) {
	
	for (Player* player : players)
		if (player->getID() == num)
			return player;

	return nullptr;

}

void Players::newPlayer() {

	Player* newPlayer = new Player(lastNumber);
	players.push_back(newPlayer);		// Adding player to list of players

	cout << "\t";						// Confirmation of added player
	newPlayer->printName();
	cout << " (#" << lastNumber << ") " << "added!\n";
	lastNumber++;

}


bool Players::noPlayers() {

	if (players.empty())
		return true;
	else
		return false;

}


void Players::allPlayersDetailed() {

	if (!players.empty()) {

		cout << "\nCurrent registered players:\n";

		for (const auto& val : players) {

			val->writeDetailed();
			cout << "\n";

		}
	}

	else
		cout << "No players registered yet!\n";

}


void Players::allPlayersSimple() {

	if (!players.empty()) {

		cout << "Players:\n";

		for (const auto& val : players) {

			cout << "\t";
			val->writeSimple();

		}

		cout << "\n";
	}

	else
		cout << "No players registered yet!\n";

}


