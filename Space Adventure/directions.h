#include "global.h"
#ifndef DIRECTIONS
#define DIRECTIONS
class directions{
	
public:
	location north, east, south, west, down, up;
	door_state north_door, east_door, west_door, south_door;
	directions();
	void directions::connect_rooms(location room_location);
};
#endif