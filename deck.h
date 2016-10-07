#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

namespace cdeck{
	class Deck{
		private:
			std::vector<cdeck::Card> _deck;
		public:
			Deck();
			void add(cdeck::Card c);
			void burn(cdeck::Card c);
			cdeck::Card draw();
			cdeck::Card peek();
			int size();
	};
};

#endif
