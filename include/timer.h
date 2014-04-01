/*
 * timer.h
 *
 *  Created on: Apr 1, 2014
 *      Author: vlad
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <ctime>

namespace qpp
{

class Timer
{
	clock_t _start, _end;
public:
	Timer() :
			_start(0), _end(0)
	{
	}

	void tic()
	{
		_start = clock();
	}
	void toc()
	{
		_end=clock();
	}
	double ticks(){return _end-_start;}
	void reset(){_start=_end;}
	double secs()
	{
		return ticks() / CLOCKS_PER_SEC;
	}
	virtual ~Timer() = default;
};

} /* namespace qpp */

#endif /* TIMER_H_ */
