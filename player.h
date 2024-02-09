#ifndef __player_h
#define __player_h

#include <iostream>
#include <vector>
#include <string>
#include "card.h"


class Player {

	private:
		int playerID;
		std::string playerName;
		float funds;
		std::vector <Card*> playerCards;


	public:
		Player();
		Player(int num);
		~Player();
		void addCard(char s, int v);	// Suit and value
		int getID() const { return playerID; }
		void printName();
		void showCards();
		int sumCards();					// Sums up value of current hand
		void writeDetailed() const;
		void writeSimple() const;
};

#endif