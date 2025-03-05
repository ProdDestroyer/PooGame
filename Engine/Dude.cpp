#include "Dude.h"

Dude::Dude(const Vec2D& pos, const Vec2D& vel) :
	pos(pos.x, pos.y),
	vel(vel.x, vel.y)
{
	
}

void Dude::move(const Vec2D& direction, const float dt) {
	pos += direction * dt * 100;
}

void Dude::clamp()
{
	const float xb = pos.x;
	const float yb = pos.y;

	pos.x = MyUtilities::clampX(pos.x, width);
	pos.y = MyUtilities::clampY(pos.y, width);
}

float Dude::getX()
{
	return pos.x;
}

float Dude::getY()
{
	return pos.y;
}

const Vec2D& Dude::getPos() const
{
	return pos;
}

void Dude::setCrashed(const bool crashed)
{
	this->crashed = crashed;
}

bool Dude::isCrashed() const
{
	return crashed;
}

void Dude::draw(Graphics& gfx) const
{
	const int int_x = int(pos.x);
	const int int_y = int(pos.y);
	gfx.PutPixel(7 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 3 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 3 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 4 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 4 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(3 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(3 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(5 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(14 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(15 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 10 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 10 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 11 + int_y, 20, 14, 18);
	gfx.PutPixel(8 + int_x, 11 + int_y, 18, 11, 14);
	gfx.PutPixel(9 + int_x, 11 + int_y, 18, 12, 14);
	gfx.PutPixel(10 + int_x, 11 + int_y, 18, 12, 14);
	gfx.PutPixel(11 + int_x, 11 + int_y, 21, 13, 16);
	gfx.PutPixel(12 + int_x, 11 + int_y, 24, 11, 15);
	gfx.PutPixel(13 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 12 + int_y, 23, 9, 23);
	gfx.PutPixel(7 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(10 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(11 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(12 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(13 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(10 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(11 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(12 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(13 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 15 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(9 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(14 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 15 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 16 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(9 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(14 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 16 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 19 + int_y, 0, 0, 0);

}
