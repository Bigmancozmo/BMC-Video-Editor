#include "WindowCallbacks.h"

WindowCallbacks::WindowCallbacks()
{
}

void WindowCallbacks::SetSizeCallback(GLFWwindow* window, GLFWwindowsizefun callback)
{
	glfwSetWindowSizeCallback(window, callback);
}
