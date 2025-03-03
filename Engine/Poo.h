#pragma once
#include "MyUtilities.h"
#include "Graphics.h"
#include <assert.h>

class Poo {
private:

	int x;
	int y;
	int vx;
	int vy;
	bool eaten = false;
	bool initialized = false;

public:

	void init(const int x, const int y, const int vx, const int vy);
	int getX();
	int getY();
	void move();
	void draw(Graphics& gfx) const;

	static constexpr int width = 24;
	static constexpr int height = 24;
};