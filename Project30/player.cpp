#include "player.h"

player::player(){
	player_location = CRYO_ROOM;
}
location player :: get_location() const{
	return player_location;
}
void player::move_location(location newlocation){
	player_location = newlocation;
}

 possible_moves player::input_interpretation(string p_input){
	 if ((p_input) == "n" || (p_input) == "north") return NORTH;
	 else if ((p_input) == "e" || (p_input) == "east") return EAST;
	 else if ((p_input) == "s" || (p_input) == "south") return SOUTH;
	 else if ((p_input) == "w" || (p_input) == "west") return WEST;
	 else if ((p_input) == "u" || (p_input) == "up") return UP;
	 else if ((p_input) == "d" || (p_input) == "down") return DOWN;
	 else if ((p_input) == "exit") return EXIT;
	 return NOT_VALID;
 }
