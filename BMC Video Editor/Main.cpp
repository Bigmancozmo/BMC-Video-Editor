#include "Main.h"

int main() {
	// Enable certain features if in debug mode.
	bool DEBUG_MODE = false;
#if defined _DEBUG
	DEBUG_MODE = true;
#endif

	// Managers
	WindowManager windowManager = WindowManager();
	GLDrawing renderer = GLDrawing();
	FileManager fileManager = FileManager();
	KeyboardInput keyboard = KeyboardInput();
	Math math = Math();

	cout << fileManager.GetExeDirectory() << endl;

	// Open Window
	if (!windowManager.OpenWindow(800, 600, "BMC Video Editor")) {
		cout << "Failed to create window" << endl;
		return -1;
	}

	GLFWwindow* window = windowManager.GetWindow();
	int brightness = 0;
	// Refresh Window
	while (!windowManager.ShouldClose()) {
		if (keyboard.IsKeyDown(GLFW_KEY_UP, window)) {
			brightness += 1;
		}
		if (keyboard.IsKeyDown(GLFW_KEY_DOWN, window)) {
			brightness -= 1;
		}
		brightness = math.Clamp(brightness, 0, 255);
		renderer.SetBackgroundColor(brightness, brightness, brightness);
		windowManager.Render();
		windowManager.Update();
	}

	windowManager.~WindowManager();

	return 0;
}
