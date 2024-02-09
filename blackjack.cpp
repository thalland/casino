#include <iostream>
#include <vector>
#include "deck.h"
#include "players.h"
#include "player.h"
#include "blackjack.h"
#include "LesData3.h"

using namespace std;

extern Players gPlayerBase;


void Blackjack::newGame() {

	if (!gPlayerBase.noPlayers()) {		// Checking for available players


		int playerNumber = 0,
			startCards = 2;			// Number of initial cards
		Player* player;

		cout << "Who will play?\n\n";

		gPlayerBase.allPlayersSimple();
		cin.ignore();
		playerNumber = lesInt("Player number:", 1, gPlayerBase.getLastNumber()-1);


		player = gPlayerBase.getPlayer(playerNumber);

		Deck* playingDeck = new Deck();

		
		// playingDeck->dealCards(player, startCards);
		// playingDeck->pickCard(player);

	}

	else
		cout << "\nCan't find any players\n";

} 