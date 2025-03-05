#pragma once
#include "MyUtilities.h"
#include "Graphics.h"
#include "Vec2D.h"
class SquaredFood {
private:
	Vec2D pos;
	int r = 255;
	int g = 0;
	int b = 0;
	int colorSpeed = 1;

public:
	float getX() const;
	float getY() const;
	void draw(Graphics& gfx);
	void randomizePosition();
	static constexpr int size = 20;

};