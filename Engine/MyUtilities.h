#pragma once
#include <random>
class MyUtilities {
public:
	static int clampX(const int x, const int width);
	static int clampY(const int y , const int height);
	static bool testCollision(const int x0, const int width0, const int y0, const int height0, const int x1, const int width1, const int y1, const int height1);
	static int randomBetween(const int a, const int b);
};
