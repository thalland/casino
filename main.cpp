#include <iostream>
#include "deck.h"
#include "blackjack.h"
#include "player.h"
#include "players.h"
#include "funksjoner.h"
using namespace std;


Players gPlayerBase;
Blackjack gBlackjackGames;


int main() {

	char answer;

	skrivMeny();

	do {

		cout << "\nEnter option:\t";
		cin >> answer;
		answer = toupper(answer);

		switch (answer) {
			case 'A': gPlayerBase.allPlayersDetailed(); break;
			case 'B': gBlackjackGames.newGame(); break;
			case 'N': gPlayerBase.newPlayer(); break;
			case 'Q': cout << "Exiting program\n"; break;
			default: skrivMeny();

		}

	} while (answer != 'Q');

	/*
	Player* player1 = new Player();

	std::cout << "Hello, World!\n\n";

	Deck* playingDeck = new Deck();

	playingDeck->shuffleDeck();

	playingDeck->pickCard(player1);


	player1->showCards();
	*/

	return 0;

}




