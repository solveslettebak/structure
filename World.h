#pragma once
#include "Obj.h"

#include <memory>
#include <vector>
class World {
public:
	World();
	std::shared_ptr<Obj> AddObject();
	void update();

	//std::vector<std::shared_ptr<Obj>> getObjects();
	std::vector<std::shared_ptr<Obj>> objects;
};

