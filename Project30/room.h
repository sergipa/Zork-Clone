#include "global.h"
#include <iostream>
using namespace std;
class room{
	string room_name;
	string room_description;
	location room_location;
public:
	room(const string& name, const string& description, location location);
	string getname()const;
	string getdesc()const;
};
