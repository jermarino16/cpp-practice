#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player{
private:
	int health;
	string name;
	int xp;

public:
	void setname(string);
	void sethealth(int);
	void talk(string);
	void print_details();
	Player();
	Player(int, string, int);
	


};

#endif
