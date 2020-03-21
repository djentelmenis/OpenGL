#include <iostream>
#include <glew/glew.h>
#include "display.h"

int main(int argc, char** argv) {
	std::cout << "Hello world!" << std::endl;
	Display display(800, 600, "hello world!");

	while (!display.isClosed()) {
		display.clear(0.0f, 0.15f, 0.3f, 1.0f);
		display.update();
	}

	return 0;
}