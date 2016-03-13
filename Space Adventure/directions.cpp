#include "directions.h"
directions::directions(){
	north_door = NO_DOOR;
	north = EMPTY;
	east_door = NO_DOOR;
	east = EMPTY;
	south_door = NO_DOOR;
	south = EMPTY;
	west_door = NO_DOOR;
	west = EMPTY;
	up = EMPTY;
	down = EMPTY;
	
}
void directions::connect_rooms(location room_location){
	switch (room_location){

	case CRYO_ROOM:{
					   north = WEAPON_ROOM;
					   down = SUB_FLOOR1;
					   east = ROBOT_ROOM;
					   break; }

	case WEAPON_ROOM:{
						 south = CRYO_ROOM;
						 break; }
	case ROBOT_ROOM:{
						west = CRYO_ROOM;
						east_door = CLOSED;
						east = PREBOSS_ROOM;
						break; }
	case SUB_FLOOR1:{
						up = CRYO_ROOM;
						east = SUB_FLOOR2;
						break; }
	case SUB_FLOOR2:{
						west = SUB_FLOOR1;
						up = PREBOSS_ROOM;
						break; }
	case PREBOSS_ROOM:{
						  west_door = CLOSED;
						  west = ROBOT_ROOM;
						  east = EXPLOSIVE_ROOM;
						  down = SUB_FLOOR2;
						  north = BOSS_ROOM;
						  break; }
	case EXPLOSIVE_ROOM:{
							west = PREBOSS_ROOM;
							break; }

	case BOSS_ROOM:{
					   south = PREBOSS_ROOM;
					   break; }
	}
}