#include "deck.h"
#include <algorithm>

cdeck::Deck::Deck(){
 
}

void cdeck::Deck::add(cdeck::Card c){
	_deck.push_back(c);
}

void cdeck::Deck::burn(cdeck::Card c){
	_deck.insert(_deck.begin(), c);
}

cdeck::Card cdeck::Deck::draw(){
	cdeck::Card c = _deck.back();
	_deck.pop_back();
	return c;
}

cdeck::Card cdeck::Deck::peek(){
	return _deck.back();
}

void cdeck::Deck::shuffle(){
	std::random_shuffle(_deck.begin(), _deck.end());	
}

int cdeck::Deck::size(){
	return _deck.size();
}
