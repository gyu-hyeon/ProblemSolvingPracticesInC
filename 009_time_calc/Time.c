#include "Time.h"

Time addTime(Time t1, Time t2)
{
	t1.sec += t2.sec;
	if (t1.sec >= 60) t1.min++, t1.sec -= 60;

	t1.min += t2.min;
	if (t1.min >= 60) t1.hour++, t1.min -= 60;

	t1.hour += t2.hour;
	if (t1.hour >= 24) t1.day++, t1.hour -= 24;

	t1.day += t2.day;

	return t1;
}