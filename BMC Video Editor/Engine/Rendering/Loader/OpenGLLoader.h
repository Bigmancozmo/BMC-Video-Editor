#pragma once
#include "../../RenderModules.h"
class OpenGLLoader
{
public:
	OpenGLLoader(GLFWwindow* window);
	void LoadOpenGL();
	void SetViewportSize(int width, int height);

private:
	GLFWwindow* win;

};
