#include "WindowManager.h"

WindowManager::WindowManager(int width, int height, const char* title)
{
	monitor = glfwGetPrimaryMonitor();
	vidMode = glfwGetVideoMode(monitor);
	window = glfwCreateWindow(width, height, title, NULL, NULL);
	glfwShowWindow(window);
}

WindowManager::~WindowManager()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

int WindowManager::GetScreenSize()
{
	return 1,2;
}

void WindowManager::Update()
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

bool WindowManager::ShouldClose()
{
	return glfwWindowShouldClose(window);
}
