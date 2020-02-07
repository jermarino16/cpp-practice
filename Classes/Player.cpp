#include "Player.h"

Player::Player()
: health{5}, name{"Bob"}, xp{100}{

}

Player::Player(int h, string n, int x_p ) 
: health{h}, name{n}, xp{x_p}{
	
}

void Player::setname(string name){
	this->name = name;
}

void Player::sethealth(int health){
	this->health = health;
}

void Player::talk(string sentence){
	cout << this->name << " says " << sentence << endl;
}

void Player::print_details(){
	cout << "name: " << this->name << endl;
	cout << "health: " << this->health << endl;
	cout << "xp: " << this->xp << endl;
}

int main(){
	Player nobody{};
	Player fred{100, "fred", 5};
	fred.sethealth(50000000);

	nobody.print_details();
	fred.print_details();


	return 0;
}