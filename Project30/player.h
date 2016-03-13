#include "global.h"
#ifndef PLAYER
#define PLAYER
class player{
	location player_location;
public:
	player();
	location get_location() const;
	void move_location(location newlocation);
};
#endif