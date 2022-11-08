#include "Math.h"

Math::Math()
{
}

double Math::Clamp(double number, double min, double max)
{
	int num = number;
	if (num < min) {
		num = min;
	}
	if (num > max) {
		num = max;
	}
	return num;
}
