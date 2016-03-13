#include <string>
#include "world.h"

world::world(){
	 cryo = new room;
	 weapon = new room;
	 robot = new room;
	 sub1 = new room;
	 sub2 = new room;
	 preboss = new room;
	 explosive = new room;
	 boss = new room;
}
void world :: create_world(){
	cryo->create_room(CRYO_ROOM);
	weapon->create_room(WEAPON_ROOM);
	robot->create_room(ROBOT_ROOM);
	sub1->create_room(SUB_FLOOR1);
	sub2->create_room(SUB_FLOOR2);
	preboss->create_room(PREBOSS_ROOM);
	explosive->create_room(EXPLOSIVE_ROOM);
	boss->create_room(BOSS_ROOM);
}