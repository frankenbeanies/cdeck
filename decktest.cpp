#include <iostream>
#include "card.h"

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
	return 0;
}
