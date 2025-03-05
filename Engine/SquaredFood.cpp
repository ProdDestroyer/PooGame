#include "SquaredFood.h"

void SquaredFood::draw(Graphics& gfx)
{
	g += colorSpeed;
	b += colorSpeed;
	colorSpeed *= (g == 255 || g == 0) ? -1 : 1;
	gfx.drawRect(int(pos.x), int(pos.y), size, size, r, g, b);
}

void SquaredFood::randomizePosition()
{
	this->pos.x = float(MyUtilities::randomBetween(10, 760));
	this->pos.y = float(MyUtilities::randomBetween(10, 560));
}

float SquaredFood::getX() const
{
	return pos.x;
}

float SquaredFood::getY() const
{
	return pos.y;
}