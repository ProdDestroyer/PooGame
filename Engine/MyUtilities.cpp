#include "MyUtilities.h"
#include "Graphics.h"

float MyUtilities::clampX(const float x, const int width)
{
	return (x < 0) ? 0 : (x +width > Graphics::ScreenWidth - 1) ? float(Graphics::ScreenWidth - 1 -width) : x;
}

float MyUtilities::clampY(const float y, const int height)
{
	return (y < 0) ? 0 : (y + height > Graphics::ScreenHeight - 1) ? float(Graphics::ScreenHeight - 1 - height) : y;
}

bool MyUtilities::testCollision(const float x0, const float width0, const float y0, const float height0, const float x1, const float width1, const float y1, const float height1)
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