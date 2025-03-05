#pragma once
#include <random>
class MyUtilities {
public:
	static float clampX(const float x, const int width);
	static float clampY(const float y , const int height);
	static bool testCollision(const float x0, const float width0, const float y0, const float height0, const float x1, const float width1, const float y1, const float height1);
	static int randomBetween(const int a, const int b);
};
