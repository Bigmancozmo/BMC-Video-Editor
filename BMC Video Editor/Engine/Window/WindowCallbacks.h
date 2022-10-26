#pragma once
#include "../Engine.h"

class WindowCallbacks
{
public:
	WindowCallbacks();
	void SetSizeCallback(GLFWwindow* window, GLFWwindowsizefun callback);
};
