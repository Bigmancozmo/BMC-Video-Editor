#pragma once
#include "../RenderModules.h"

class WindowCallbacks
{
public:
	WindowCallbacks();
	void SetSizeCallback(GLFWwindow* window, GLFWwindowsizefun callback);
};
