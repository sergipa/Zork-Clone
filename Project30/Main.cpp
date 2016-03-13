#include <iostream>
#include <vector>
#include <string>
#include "world.h"
using namespace std;




int main(){
	world* ship = new world;
	ship->create_world();
	ship->print_roominfo();
	while (ship->player_input()){
		cout << "\n";
	}

		printf("Next move");
}