#include <iostream>
#include "room.h"
#include "exit.h"
#include <vector>
#include <string>
using namespace std;




int main(){
	room* example = new room("This is a name", "This is a description",CRYO_ROOM);

	cout << example->getname() << ".";


	getchar();
	return 0;
}