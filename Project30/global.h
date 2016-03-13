#ifndef GLOBAL
#define GLOBAL
enum possible_moves{
	NORTH,
	EAST,
	SOUTH,
	WEST,
	UP,
	DOWN,
	EXIT,
	OPEN,
	CLOSE,
	NOT_VALID
};
enum location{
	CRYO_ROOM,
	WEAPON_ROOM,
	ROBOT_ROOM,
	SUB_FLOOR1,
	SUB_FLOOR2,
	PREBOSS_ROOM,
	EXPLOSIVE_ROOM,
	BOSS_ROOM,
	EMPTY
};
enum door_state{
	OPENED,
	CLOSED,
	NO_DOOR
};
#endif