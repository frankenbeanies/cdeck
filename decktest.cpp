#include <iostream>
#include "card.h"
#include "deck.h"

void testDeck(){
	cdeck::Deck d;
	cdeck::Card c("Test", 1);
	cdeck::Card c2("Test", 2);
	std::cout << "Testing Deck" << std::endl;
	
	//add
	d.add(c);
	if(d.draw().getValue() == 1){
		std::cout << "\033[0;32madd test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31madd test FAILED\033[0m" << std::endl;
	}

	//burn
	d.add(c);
	d.burn(c2);
	if(d.draw().getValue() == 1){
		std::cout << "\033[0;32mburn test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31mburn test FAILED\033[0m" << std::endl;
	}

	//pop
	if(d.size() == 1){
		std::cout << "\033[0;32mpop test PASSED \033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31mpop test FAILED \033[0m" << std::endl;
	}
}

void testCard(){
	cdeck::Card c("Test", 0);
	cdeck::Card d("Test", 0);
	std::cout << "Testing Card" << std::endl;

	//compare(cdeck::Card c)
	if(c.compare(d) == 0){
		std::cout << "\033[0;32mcompare = test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31mcompare = test FAILED\033[0m" << std::endl;
	}

	d = cdeck::Card("Test", 1);
	if(c.compare(d) < 0){
		std::cout << "\033[0;32mcompare - test PASSED\033[0m" << std::endl; 
	}else{
		std::cout << "\033[0;31mcompare - test FAILED\033[0m" << std::endl;
	}

	d = cdeck::Card("Test", -1);
	if(c.compare(d) > 0){
		std::cout << "\033[0;32mcompare + test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31mcompare + test FAILED\033[0m" << std::endl;
	}

	//getSuite()
	if(c.getSuite() == "Test"){
		std::cout << "\033[0;32mgetSuite test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;31mgetSuite test FAILED\033[0m" << std::endl;
	}

	//getValue()
	if(c.getValue() == 0){
		std::cout << "\033[0;32mgetValue test PASSED\033[0m" << std::endl;
	}else{
		std::cout << "\033[0;32mgetValue test FAILED\033[0m" << std::endl;
	}
}

int main(){
	testCard();
	testDeck();
	return 0;
}
