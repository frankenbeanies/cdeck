cdeck
=====

C++ library that simulates a deck of cards. 

cdeck::Card
===========

cdeck Card object

cdeck::Card::Card(std::string, int value)
-----------------------------------------

Instantiates the card object

```cpp
cdeck::Card c("Test", 0);
```

cdeck::Card::compare(cdeck::Card)
---------------------------------

Compare two Card objects. Returns the difference of self.value and other.value

```cpp
cdeck::Card c("Test", 0);
cdeck::Card d("Test", 0);

//returns 0
c.compare(d);

d = cdeck::Card("Test", 1);

//returns -1
c.compare(d);

d = cdeck::Card("Test", -1);

//returns 1
c.compare(d);
```

cdeck::Card::getSuite()
-----------------------

returns the Card's suite

```cpp
cdeck::Card c("Test", 0);

//returns "Test"
std::string suite = c.getSuite();
```

cdeck::Card::getValue()
-----------------------

returns the Card's value

```cpp
cdeck::Card c("Test", 0);

//returns 0
int value = c.getValue();
```

cdeck::Deck
===========

cdeck Deck object. Default constructor only

```cpp
cdeck::Deck d;
```

cdeck::add(cdeck::Card)
-----------------------

Adds a card to the top of the stack

```cpp
cdeck::Deck d;
cdeck::Card c("Test", 0);

d.add(c);
```

cdeck::burn(cdeck::Card)
------------------------

Adds a card to the bottom of the stack

```cpp
d.burn(c);
```

cdeck::size()
-------------

Returns the current stack size

```cpp
int size = d.size();
```

cdeck::draw()
------------

Removes and returns the item at the top of the stack

```cpp
Card c1 = d.draw();
```

cdeck::peek()
-------------

Returns the card at the top of the stack without removing it

```
Card c2 = d.peek();
```
