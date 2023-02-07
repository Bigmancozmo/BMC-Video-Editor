#include "main.h"

int main() {
	glfwInit();
	WindowManager windowManager = WindowManager(800, 600, "hi hi hi hi hi hi hi hi hi hi");
	while (!windowManager.ShouldClose()) {
		windowManager.Update();
	}
	windowManager.~WindowManager();
	return 0;
}