#ifndef __deck_h
#define __deck_h

#include <iostream>
#include <vector>
#include "player.h"
#include "card.h"

class Deck {

	private:
		std::vector <Card*> cards; 

	public:
		Deck();
		~Deck();
		void dealCards(Player* player, int numCards);
		void pickCard(Player* player);
		void shuffleDeck();

};

#endif