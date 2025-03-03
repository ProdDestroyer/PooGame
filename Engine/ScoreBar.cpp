#include "ScoreBar.h"

int ScoreBar::getX() const
{
	return x;
}

int ScoreBar::getY() const
{
	return y;
}

void ScoreBar::increase()
{

	width += (x + width + 10 <= Graphics::ScreenWidth - 1) ? 10 : 0;
}

void ScoreBar::draw(Graphics& gfx)
{
	gfx.drawRect(x, y, width, height, r, g, b);
}
