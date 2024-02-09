#ifndef __blackjack_h
#define __blackjack_h

#include <iostream>
#include "players.h"


class Blackjack {

	private:
		std::list <Players*> participants;

	public:
		void newGame();

};


#endif