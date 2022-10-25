#include "Main.h"

int main() {
	// Enable certain features if in debug mode.
	bool DEBUG_MODE = false;
#if defined _DEBUG
	DEBUG_MODE = true;
#endif

	// Open Window
	WindowManager windowManager = WindowManager();
	GLDrawing renderer = GLDrawing();
	if (!windowManager.OpenWindow(800, 600, "BMC Video Editor")) {
		cout << "Failed to create window" << endl;
		return -1;
	}

	// Refresh Window
	while (!windowManager.ShouldClose()) {
		renderer.SetBackgroundColor(200, 200, 200);
		windowManager.Render();
		windowManager.Update();
	}

	windowManager.~WindowManager();

	return 0;
}
