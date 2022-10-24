#include "GLDrawing.h"

GLDrawing::GLDrawing()
{
}

void GLDrawing::SetBackgroundColor(int R, int G, int B)
{
	glClearColor(R/255,G/255,B/255,1.0f);
}
