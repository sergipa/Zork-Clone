#include "directions.h"
directions::directions(){
	north = EMPTY;
	east = EMPTY;
	south = EMPTY;
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
						east = CRYO_ROOM;
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
						  east = ROBOT_ROOM;
						  west = EXPLOSIVE_ROOM;
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