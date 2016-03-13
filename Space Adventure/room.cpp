#include "room.h"

room::room(){
	room_name = "";
	room_description = "";
	roomsdirections = new directions;
}
void room::create_room(location locgen){
	switch (locgen){

	case CRYO_ROOM:{
					   room_name = "CryoRoom";
					   room_description = "You've woken up here, this is where your journey started";
					   roomsdirections->connect_rooms(CRYO_ROOM);
					   break; }

	case WEAPON_ROOM:{
						 room_name = "Armory";
						 room_description = "Here you store emergency weapons, you might want to grab one";
						 roomsdirections->connect_rooms(WEAPON_ROOM);
						 break; }
	case ROBOT_ROOM:{
						room_name = "Corridor";
						room_description = "This corridor leads to the main room of the ship";
						roomsdirections->connect_rooms(ROBOT_ROOM);
						break; }
	case SUB_FLOOR1:{
						room_name = "Sub-Floor_A";
						room_description = "This is not made for people, it's difficult to walk here";
						roomsdirections->connect_rooms(SUB_FLOOR1);
						break; }
	case SUB_FLOOR2:{
						room_name = "Sub-Floor_B";
						room_description = "This is not made for people, it's difficult to walk here, you almost made it";
						roomsdirections->connect_rooms(SUB_FLOOR2);
						break; }
	case PREBOSS_ROOM:{
						room_name = "Resting Area";
						room_description = "Good'ol resting area";
						roomsdirections->connect_rooms(PREBOSS_ROOM);
						break; }
	case EXPLOSIVE_ROOM:{
						room_name = "Science stuff room";
						room_description = "This is where one of your crew mates investigated with chemicals";
						roomsdirections->connect_rooms(EXPLOSIVE_ROOM);
						break; }

	case BOSS_ROOM:{
					   room_name = "MAIN ROOM";
					   room_description = "Something is wrong here";
					   roomsdirections->connect_rooms(BOSS_ROOM);
					   break; }
	}
}
 std::string room::getname() const{
	 return room_name;
 }
 std::string room::getdesc() const{
	 return room_description;
 }
