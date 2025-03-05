#pragma once
#include "MyUtilities.h"
#include "Graphics.h"
#include "Vec2D.h"

class Dude {
private:
	Vec2D pos;
	Vec2D vel;
	bool crashed = false;

public:
	Dude(const Vec2D& pos, const Vec2D& vel);
	void move(const Vec2D& direction, const float dt);
	void clamp();
	float getX();
	float getY();
	const Vec2D& getPos() const;
	void setCrashed(const bool crashed);
	bool isCrashed() const;
	void draw(Graphics& gfx) const;

	static constexpr int width = 20;
	static constexpr int height = 20;
};