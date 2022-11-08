#pragma once
#include "GLFW/glfw3.h"
class KeyboardInput
{
public:
	KeyboardInput();
	bool IsKeyDown(int key, GLFWwindow* window);
};

