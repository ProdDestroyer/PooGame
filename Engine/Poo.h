#pragma once
#include "MyUtilities.h"
#include "Graphics.h"
#include <assert.h>
#include "Vec2D.h"

class Poo {
private:
	Vec2D pos;
	Vec2D vel;
	bool eaten = false;
	bool initialized = false;

public:
	void init(const Vec2D& pos, const Vec2D& vel);
	float getX();
	float getY();
	void move(const float);
	void draw(Graphics& gfx) const;
	const Vec2D& getPos() const;

	static constexpr int width = 24;
	static constexpr int height = 24;
};