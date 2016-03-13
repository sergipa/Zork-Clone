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
	 theplayer = new player;
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
void world::print_roominfo(){
	switch (theplayer->get_location()){
	case CRYO_ROOM:{
					   cout << cryo->getname() << "\n" << cryo->getdesc();
					   break; }

	case WEAPON_ROOM:{
						 cout << weapon->getname() << "\n" << weapon->getdesc();
						 break; }
	case ROBOT_ROOM:{
						cout << robot->getname() << "\n" << robot->getdesc();
						break; }
	case SUB_FLOOR1:{
						cout << sub1->getname() << "\n" << sub1->getdesc();
						break; }
	case SUB_FLOOR2:{
						cout << sub2->getname() << "\n" << sub2->getdesc();
						break; }
	case PREBOSS_ROOM:{
						  cout << preboss->getname() << "\n" << preboss->getdesc();
						  break; }
	case EXPLOSIVE_ROOM:{
							cout << explosive->getname() << "\n" << explosive->getdesc();
							break; }

	case BOSS_ROOM:{
					   cout << boss->getname() << "\n" << boss->getdesc();
					   break; }
	}
}
void world::move(possible_moves move){
	switch (theplayer->get_location()){
	case CRYO_ROOM:{
					   switch (move){
					   case NORTH: theplayer->move_location(cryo->roomsdirections->north); break;
					   case SOUTH: theplayer->move_location(cryo->roomsdirections->south); break;
					   case EAST: theplayer->move_location(cryo->roomsdirections->east); break;
					   case DOWN: theplayer->move_location(cryo->roomsdirections->down); break;
					   }
					   break; }

	case WEAPON_ROOM:{ 
						 switch (move){
						 case SOUTH: theplayer->move_location(weapon->roomsdirections->south); break;
						 }
						 
						 break; }
	case ROBOT_ROOM:{
						switch (move){
						case WEST: theplayer->move_location(robot->roomsdirections->west); break;
						case EAST: theplayer->move_location(robot->roomsdirections->east); break;
						}
						break; }
	case SUB_FLOOR1:{
						switch (move){
						case UP: theplayer->move_location(sub1->roomsdirections->up); break;
						case EAST: theplayer->move_location(sub1->roomsdirections->east); break;
						}
						break; }
	case SUB_FLOOR2:{
						switch (move){
						case WEST: theplayer->move_location(sub2->roomsdirections->west); break;
						case UP: theplayer->move_location(sub2->roomsdirections->up); break;
						}
						break; }
	case PREBOSS_ROOM:{
						  switch (move){
						  case NORTH: theplayer->move_location(preboss->roomsdirections->north); break;
						  case SOUTH: theplayer->move_location(preboss->roomsdirections->south); break;
						  case EAST: theplayer->move_location(preboss->roomsdirections->east); break;
						  case DOWN: theplayer->move_location(preboss->roomsdirections->down); break;
						  }
						  break; }
	case EXPLOSIVE_ROOM:{
							switch (move){
							case WEST: theplayer->move_location(explosive->roomsdirections->west); break;
							}
							break; }

	case BOSS_ROOM:{
					   switch (move){
					   case SOUTH: theplayer->move_location(boss->roomsdirections->south); break;
					   }
					   break; }
	}
}
bool world::player_input(){
	cout << "\nIn what direction you want to move? N(north)/E(east)/S(south)/W(west)/U(up)/D(down)";
	string p_input;
	getline(cin, p_input);
	possible_moves correcteddinput = theplayer->input_interpretation(p_input);
	if (correcteddinput == EXIT) return false;
	else if (correcteddinput == NOT_VALID){
		cout << "That is not a valid expression, try again please";
	}
	else{
		move(correcteddinput);
	}
	print_roominfo();
	return true;
}