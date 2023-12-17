#include <iostream>
#include "World.h"
#include <Windows.h>

int main() {
    World world;
    for (int i = 0; i < 10; i++) {
		world.update();
		Sleep(100);
	}
}