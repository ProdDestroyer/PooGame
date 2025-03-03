#pragma once
#include "MyUtilities.h"
#include "Graphics.h"
class SquaredFood {
private:
	int x;
	int y;
	int r = 255;
	int g = 0;
	int b = 0;
	int colorSpeed = 1;

public:
	int getX() const;
	int getY() const;
	void draw(Graphics& gfx);
	void randomizePosition();
	static constexpr int size = 20;

};