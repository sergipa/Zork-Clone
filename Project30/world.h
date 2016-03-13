#include "room.h"
#include <string>
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
	world();
	void create_world();
	~world();
};
