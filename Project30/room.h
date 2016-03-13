#include "global.h"
#include "directions.h"
#include <iostream>
#ifndef ROOM
#define ROOM
using namespace std;
class room{
public:
	string room_name;
	string room_description;
	location room_location;

	room();
	void create_room( location location);
	
	string getname()const;
	string getdesc()const;


	~room();
};
#endif