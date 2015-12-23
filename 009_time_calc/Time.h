#ifndef __TIME_H__
#define __TIME_H__

typedef struct _Time
{
	int day;
	int hour;
	int min;
	int sec;
} Time;

Time addTime(Time t1, Time t2);

#endif // __TIME_H__
