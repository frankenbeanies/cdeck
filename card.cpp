#include "card.h"

cdeck::Card::Card(std::string suite, int value){
	_suite = suite;
	_value = value;
}

int cdeck::Card::compare(cdeck::Card c){
	return _value - c.getValue();
}

std::string cdeck::Card::getSuite(){
	return _suite;
}

int cdeck::Card::getValue(){
	return _value;
}
