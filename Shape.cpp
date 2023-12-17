#include "Shape.h"
#include <iostream>
Shape::Shape() { std::cout << "Shape constructor" << std::endl; }
void Shape::move(){ std::cout << "Moving shape" << std::endl; }