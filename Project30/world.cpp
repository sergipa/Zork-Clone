#include <string>
#include "world.h"

world::world(){
	room* cryo = new room;
	room* weapon = new room;
	room* robot = new room;
	room* sub1 = new room;
	room* sub2 = new room;
	room* preboss = new room;
	room* explosive = new room;
	room* boss = new room;
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