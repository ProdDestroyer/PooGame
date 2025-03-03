#include "MyUtilities.h"
#include "Graphics.h"

int MyUtilities::clampX(const int x, const int width)
{
	return (x < 0) ? 0 : (x +width > Graphics::ScreenWidth - 1) ? Graphics::ScreenWidth - 1 -width : x;
}

int MyUtilities::clampY(const int y, const int height)
{
	return (y < 0) ? 0 : (y + height > Graphics::ScreenHeight - 1) ? Graphics::ScreenHeight - 1 - height : y;
}

bool MyUtilities::testCollision(const int x0, const int width0, const int y0, const int height0, const int x1, const int width1, const int y1, const int height1)
{
	return x0 < x1 + width1 &&
		x0 + width0 > x1 &&
		y0 < y1 + height1 &&
		y0 + height0 > y1;
}

int MyUtilities::randomBetween(const int a, const int b) {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> rand(a, b);

	return rand(rng);
}