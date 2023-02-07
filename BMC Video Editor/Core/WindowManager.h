#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

class WindowManager
{
public:
	GLFWwindow* window;
	WindowManager(int width, int height, const char* title);
	~WindowManager();
	int GetScreenSize();
	void Update();
	bool ShouldClose();
private:
	GLFWmonitor* monitor;
	const GLFWvidmode* vidMode;
};

