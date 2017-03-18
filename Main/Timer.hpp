#pragma once

#include <chrono>

struct Timer
{
	enum TimeUnit {
		NANOSECONDS,
		MICROSECONDS,
		MILLISECONDS,
		SECONDS,
		MINUTES,
		HOURS,
		DAYS
	};

	Timer();
	Timer(double startTime);//this constructor is for keeping track of total playtime
	~Timer();

	void update();

	double getTime();//returns total run time in seconds
	double getTime(TimeUnit unit);//returns total run time in the selected units
	double getElapsedTime();
	double getElapsedTime(TimeUnit unit);

private:
	double run_time;//total run time(seconds)
	double elapsed_time;

	std::chrono::steady_clock::time_point current;
	std::chrono::steady_clock::time_point previous;
	std::chrono::steady_clock::duration elapsed;
};

