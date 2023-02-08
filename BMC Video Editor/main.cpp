#include "main.h"

int main() {
	glfwInit();
	WindowManager windowManager = WindowManager(800, 600, "BMC Video Editor");
	while (!windowManager.ShouldClose()) {
		windowManager.Update();
	}
	windowManager.~WindowManager();
	return 0;
}
