#include <iostream>
#include <vector>
#include <string>
#include "world.h"
using namespace std;




int main(){
	world* ship = new world;
	ship->create_world();

	getchar();
	return 0;
}