#pragma once
#include "../Engine.h"

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
	void Render();
private:
	GLFWwindow* window;
	const GLFWvidmode* vidmode;
	GLFWmonitor* monitor;
};
