#include "global.h"
#ifndef DIRECTIONS
#define DIRECTIONS
class directions{
	
public:
	location north, east, south, west, down, up;
	directions();
	void directions::connect_rooms(location room_location);
};
#endif