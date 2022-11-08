#include "KeyboardInput.h"
#include <iostream>
using namespace std;
KeyboardInput::KeyboardInput()
{
}

bool KeyboardInput::IsKeyDown(int key, GLFWwindow* window)
{
	return glfwGetKey(window, key) == GLFW_PRESS;
}
