#include "room.h"


room::room(const std::string& name, const std::string& description, location location) : room_name(name), room_description(description), room_location(location){};
 std::string room::getname() const{
	 return room_name;
 }
 std::string room::getdesc() const{
	 return room_description;
 }