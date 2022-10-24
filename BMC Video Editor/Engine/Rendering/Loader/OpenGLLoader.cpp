#include "OpenGLLoader.h"

OpenGLLoader::OpenGLLoader(GLFWwindow* window)
{
	win = window;
}

void OpenGLLoader::LoadOpenGL()
{
	glfwMakeContextCurrent(win);
	gladLoadGL();
}

void OpenGLLoader::SetViewportSize(int width, int height)
{
	glViewport(0, 0, width, height);
}
