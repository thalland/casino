#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "deck.h"
#include "player.h"
using namespace std;


Deck::Deck() {
	char suit;		// Suit of card

	for (int i = 1; i < 14; i++) {		// i is value
		for (int j = 1; j < 5; j++) {	// j is type (as int)

			switch (j) {
			case 1: suit = 'C'; break;
			case 2: suit = 'D'; break;
			case 3: suit = 'H'; break;
			case 4: suit = 'S'; break;
			default: cout << "Unknown error";
			}

			Card* newCard = new Card(i, suit);
			cards.push_back(newCard);	// Adding card to deck
		}
	}
}

Deck::~Deck() {


}


void Deck::pickCard(Player* player) {	// Player who picks card

	char type, answer;  // Type of card, and yes/no for picking new card
	int val;			// Value of card
	bool pickNew = true;
	Player* currentPlayer = player; // Player who picks the card

	if (!cards.empty()) {						// Making sure deck is created

		do {									// Option to pick new card
			type = cards.front()->getSuit();	// Picks the first card in the deck
			val = cards.front()->getValue();

			cout << "Card: " << val << " of ";

			switch (type) {

			case 'C': cout << "Clubs\n"; break;
			case 'D': cout << "Diamonds\n"; break;
			case 'H': cout << "Hearts\n"; break;
			case 'S': cout << "Spades\n"; break;
			}

			currentPlayer->addCard(type, val);	// Adds card to player hands

			auto it = cards.begin();

			if (it != cards.end()) {
				delete *it;
				cards.erase(it);
			}

			do {				// Making sure player picks valid alternative
				cout << "Pick new card? (Y/n)\n";
				cin >> answer;
				answer = toupper(answer);
			} while (answer != 'N' && answer != 'Y');

			if (answer == 'N')
				pickNew = false;

		} while (pickNew == true);
	}

	else
		cout << "Create deck first!\n";

}


void Deck::shuffleDeck() {

	random_device rd;		// Random seed
	std::mt19937 rng(rd());	// RNG
	shuffle(cards.begin(), cards.end(), rng);	// Shuffling deck with RNG

}