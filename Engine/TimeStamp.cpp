#include "TimeStamp.h"

TimeStamp::TimeStamp()
{
	last = std::chrono::steady_clock::now();
}

float TimeStamp::Stamp()
{
	const auto old = last;
	last = std::chrono::steady_clock::now();
	std::chrono::duration<float> delta = last - old;
	return delta.count();
}
