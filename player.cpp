#include <iostream>
#include "player.h"
#include "deck.h"
using namespace std;

Player::Player() {

	playerName = "Unknown";
	// number == lastNumber;
	funds = 0;

}


Player::Player(int num) {

	cout << "\tPlayers name: ";
	cin.ignore();
	getline(cin, playerName);
	playerID = num;
	funds = 5000.0;

}


Player::~Player() {



}


void Player::addCard(char s, int v) {

	Card* newCard = new Card(v, s);	// Consturcting new card and
	playerCards.push_back(newCard);		// adding to player hand/vector

}

void Player::printName() {

	cout << playerName;

}


void Player::showCards() {

	cout << playerName << "'s cards:\n";

	for (const auto& val : playerCards) {
		val->writeCard();
	}
	cout << "\n";

}

void Player::writeDetailed() const {

	cout << "\nPlayer ID: " << playerID
		 << "\nName: " << playerName
		 << "\nFunds: " << funds;
}

void Player::writeSimple() const {

	cout << playerName << " (#" << playerID << ")\n";

}