#pragma once
#include <chrono>
class TimeStamp {
public:
	TimeStamp();
	float Stamp();
private:
	std::chrono::steady_clock::time_point last;
};