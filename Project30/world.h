#include "room.h"
#include "player.h"
#include <string>
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

	player* theplayer;
public:
	world();
	void create_world();
	~world();
};
#endif
