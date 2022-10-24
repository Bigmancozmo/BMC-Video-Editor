#include "GLDrawing.h"

GLDrawing::GLDrawing()
{
}

void GLDrawing::SetBackgroundColor(double R, double G, double B)
{
	glClearColor(R/255.0f,G/255.0f,B/255.0f,1.0f);
}
