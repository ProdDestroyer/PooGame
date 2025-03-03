#pragma once
#include "Graphics.h"

class ScoreBar {
private:
	int x = 10;
	int y = 10;
	int width = 0;
	int height = 20;
	int r = 0;
	int g = 0;
	int b = 255;

public:

	int getX() const;
	int getY() const;
	void increase();
	void draw(Graphics& gfx);
};
