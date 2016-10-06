#ifndef CARD_H
#define CARD_H

#include <string>

namespace cdeck{
	class Card{
		private:
			std::string _suite;
			int _value;
		public:
			Card(std::string suite, int value);
			int compare(cdeck::Card c);
			std::string getSuite();
			int getValue();
	};
};
#endif
