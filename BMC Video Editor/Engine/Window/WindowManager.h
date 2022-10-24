#pragma once
#include "../RenderModules.h"

class WindowManager
{
public:
	WindowManager();
	~WindowManager();
	bool OpenWindow(int width, int height, const char* title);
	bool ShouldClose();
	GLFWwindow* GetWindow();
	const GLFWvidmode* GetVidMode();
	GLFWmonitor* GetMonitor();
	void Update();
private:
	GLFWwindow* window;
	const GLFWvidmode* vidmode;
	GLFWmonitor* monitor;
};

