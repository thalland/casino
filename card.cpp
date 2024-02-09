#include <iostream>
#include <vector>
#include "deck.h"
#include "player.h"
using namespace std;


Card::Card(int v, char s) {

	value = v;
	suit = s;

}


Card::~Card() {

}

void Card::writeCard() {

	cout << value << " of ";

	switch (suit) {

	case 'C': cout << "Clubs\n"; break;
	case 'D': cout << "Diamonds\n"; break;
	case 'H': cout << "Hearts\n"; break;
	case 'S': cout << "Spades\n"; break;
	}

}