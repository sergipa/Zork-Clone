#include "room.h"
#include "player.h"
#include <string>
#include <iostream>
#ifndef WORLD
#define WORLD
using namespace std;
class world{

	room* cryo;
	room* weapon;
	room* robot;
	room* sub1;
	room* sub2;
	room* preboss;
	room* explosive;
	room* boss;

	
public:
	player* theplayer;
	world();
	void create_world();
	void world::print_roominfo();
	void world::move(possible_moves move);
	bool world::player_input();
	~world();
};
#endif
