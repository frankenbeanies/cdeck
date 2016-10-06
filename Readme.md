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
Card c("Test", 0);

//returns "Test"
string suite = c.getSuite();
```

cdeck::Card::getValue()
-----------------------

returns the Card's value

```cpp
Card c("Test", 0);

//returns 0
int value = c.getValue();
```
