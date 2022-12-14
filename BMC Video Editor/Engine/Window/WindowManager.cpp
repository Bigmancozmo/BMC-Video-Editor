#include "WindowManager.h"

void window_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

WindowManager::WindowManager()
{
	monitor = NULL;
	vidmode = NULL;
	window = NULL;
}

WindowManager::~WindowManager()
{
	glfwTerminate();
}

bool WindowManager::OpenWindow(int width, int height, const char* title)
{
	if (!glfwInit()) {
		return false;
	}

	monitor = glfwGetPrimaryMonitor();
	vidmode = glfwGetVideoMode(monitor);

	glfwDefaultWindowHints();
	glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_FOCUS_ON_SHOW, GLFW_TRUE);

	window = glfwCreateWindow(width, height, title, NULL, NULL);

	int x = (vidmode->width / 2) - (width / 2);
	int y = (vidmode->height / 2) - (height / 2);
	glfwSetWindowPos(window, x, y);
	glfwShowWindow(window);
	
	WindowCallbacks callbackManager = WindowCallbacks();
	callbackManager.SetSizeCallback(window, window_size_callback);

	OpenGLLoader glloader = OpenGLLoader(window);
	glloader.LoadOpenGL();
	glloader.SetViewportSize(width, height);

	return true;
}

bool WindowManager::ShouldClose()
{
	return glfwWindowShouldClose(window);
}

GLFWwindow* WindowManager::GetWindow()
{
	return window;
}

const GLFWvidmode* WindowManager::GetVidMode()
{
	return vidmode;
}

GLFWmonitor* WindowManager::GetMonitor()
{
	return monitor;
}

void WindowManager::Update()
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

void WindowManager::Render()
{
	glClear(GL_COLOR_BUFFER_BIT);
}
