#include "player.h"

player::player(){
	player_location = CRYO_ROOM;
}
location player :: get_location() const{
	return player_location;
}