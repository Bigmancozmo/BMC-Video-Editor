#include "Math.h"

float Math::Clamp(int num, float min, float max)
{
	float n = num;
	if (num < min) { n = min; }
	if (num > max) { n = max; }
	return n;
}

float Math::Clamp(float num, float min, float max)
{
	float n = num;
	if (num < min) { n = min; }
	if (num > max) { n = max; }
	return n;
}

float Math::IntToFloat(int num)
{
	return (float)num;
}

int Math::FloatToInt(float num)
{
	return (int)num;
}

