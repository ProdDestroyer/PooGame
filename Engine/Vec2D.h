#pragma once
class Vec2D {
public:
	Vec2D();
	Vec2D(const float x, const float y);
	Vec2D operator+(const Vec2D& vec) const;
	Vec2D& operator+=(const Vec2D& vec);
	Vec2D operator*(const float scale) const;
	Vec2D& operator*=(const float scale);
	Vec2D operator-(const Vec2D& vec) const;
	Vec2D& operator-=(const Vec2D& vec);
	float length() const;
	float lengthSqrd() const;
	void normalize();
	Vec2D normalized() const;
	float x;
	float y;
private:
};
