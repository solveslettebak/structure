#include "Obj.h"
#include <iostream>
Obj::Obj() {
	shape = nullptr;
}

void Obj::move() {
	shape->move();
	std::cout << "Moving object" << std::endl;
}