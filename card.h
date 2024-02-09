#ifndef __card_h
#define __card_h

#include <iostream>
#include <vector>


class Card {

private:
	char suit;  // C(lub), D(iamond), H(eart) or S(pade)
	int value;  // 1-13

public:
	Card(int v, char s);	// Suit and value
	~Card();
	char getSuit() { return suit; }
	int getValue() { return value; }
	void writeCard();


};

#endif

