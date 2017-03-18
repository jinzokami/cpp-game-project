#include "Timer.hpp"

Timer::Timer()
{
	previous = std::chrono::steady_clock::now();
	elapsed_time = 0;
}

Timer::Timer(double startTime)
{
	previous = std::chrono::steady_clock::now();
	run_time = startTime;
}


Timer::~Timer()
{
}

void Timer::update()
{
	current = std::chrono::steady_clock::now();
	elapsed = current - previous;
	previous = current;

	elapsed_time = double(elapsed.count()) * std::chrono::steady_clock::period::num / std::chrono::steady_clock::period::den;
	run_time += elapsed_time;
}

double Timer::getTime()
{
	return 0.0;
}

double Timer::getTime(TimeUnit unit)
{
	switch (unit) {
	case NANOSECONDS:
		return run_time * 1000000000;
	case MICROSECONDS:
		return run_time * 1000000;
	case MILLISECONDS:
		return run_time * 1000;
	case SECONDS:
		return run_time;
	case MINUTES:
		return run_time / 60;
	case HOURS:
		return run_time / 3600;
	case DAYS:
		return run_time / 86400;
	default:
		return 0.0;
	}
}

double Timer::getElapsedTime()
{
	return elapsed_time;
}

double Timer::getElapsedTime(TimeUnit unit)
{
	switch (unit) {
	case NANOSECONDS:
		return elapsed_time * 1000000000;
	case MICROSECONDS:
		return elapsed_time * 1000000;
	case MILLISECONDS:
		return elapsed_time * 1000;
	case SECONDS:
		return elapsed_time;
	case MINUTES:
		return elapsed_time / 60;
	case HOURS:
		return elapsed_time / 3600;
	case DAYS:
		return elapsed_time / 86400;
	default:
		return 0.0;
	}
}
