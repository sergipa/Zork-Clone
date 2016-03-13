#include "global.h"
#include <iostream>
#include <string>

#ifndef PLAYER
#define PLAYER
using namespace std;
class player{
	location player_location;

public:

	player();
	location get_location() const;
	void move_location(location newlocation);
	bool player::player_input();
	possible_moves player::input_interpretation(string p_input);
	void player::move(possible_moves move);
};
#endif