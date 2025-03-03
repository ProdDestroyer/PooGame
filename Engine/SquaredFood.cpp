#include "SquaredFood.h"

void SquaredFood::draw(Graphics& gfx)
{
	g += colorSpeed;
	b += colorSpeed;
	colorSpeed *= (g == 255 || g == 0) ? -1 : 1;
	gfx.drawRect(x, y, size, size, r, g, b);
}

void SquaredFood::randomizePosition()
{
	this->x = MyUtilities::randomBetween(10, 760);
	this->y = MyUtilities::randomBetween(10, 560);
}

int SquaredFood::getX() const
{
	return x;
}

int SquaredFood::getY() const
{
	return y;
}