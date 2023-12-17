#pragma once
#include "Shape.h"
#include <memory>

class Obj {
public:
	Obj();
	void move();
protected:
	std::shared_ptr<Shape> shape;
};



//std::shared_ptr<Shape> getShape();
//void setShape(std::shared_ptr<Shape> shape);
//std::shared_ptr<Shape> original_shape;

