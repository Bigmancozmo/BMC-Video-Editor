#include "Main.h"

int main() {
	// Debug/Release Mode Setup
	bool DEBUG_MODE = false;
#if defined _DEBUG
	DEBUG_MODE = true;
#endif

	if (DEBUG_MODE) {
		cout << "In Debug Mode" << endl;
	} else {
		FreeConsole();
	}

	// Open Window
	WindowManager windowManager = WindowManager();
	GLDrawing renderer = GLDrawing();
	if (!windowManager.OpenWindow(800, 600, "BMC Video Editor")) {
		cout << "Failed to create window" << endl;
		return -1;
	}

	// Refresh Window
	while (!windowManager.ShouldClose()) {
		renderer.SetBackgroundColor(255, 0, 0);
		windowManager.Render();
		windowManager.Update();
	}

	windowManager.~WindowManager();

	return 0;
}