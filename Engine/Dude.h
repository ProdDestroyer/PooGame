#pragma once
#include "MyUtilities.h"
#include "Graphics.h"

class Dude {
private:
	int x;
	int y;
	int vx;
	int vy;
	bool crashed = false;

public:
	Dude(const int x, const int y, const int vx, const int vy);
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	void clamp();
	int getX();
	int getY();
	void setCrashed(const bool crashed);
	bool isCrashed() const;
	void draw(Graphics& gfx) const;

	static constexpr int width = 20;
	static constexpr int height = 20;
};