#include "global.h"
#include <iostream>
using namespace std;
class room{
	string room_name;
	string room_description;
	location room_location;

public:
	room();
	void create_room( location location);
	
	string getname()const;
	string getdesc()const;


	~room();
};
