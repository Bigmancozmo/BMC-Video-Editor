#pragma once
class Math
{
public:
	float Clamp(int num, float min, float max);
	float Clamp(float num, float min, float max);
	float IntToFloat(int num);
	int FloatToInt(float num);
};
