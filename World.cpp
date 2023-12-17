#include "World.h"
#include <iostream>

World::World() {
	std::cout << "World constructor" << std::endl;
	std::shared_ptr<Obj> obj = AddObject();
}

std::shared_ptr<Obj> World::AddObject() {
	std::shared_ptr<Obj> obj = std::make_shared<Obj>();
	objects.push_back(obj);
	return obj;
}

void World::update() {
	for (auto obj : objects) {
		obj->move();
	}
}