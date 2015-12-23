#ifndef __EASTER_DATE_H__
#define __EASTER_DATE_H__

typedef struct _Date
{
	int year;
	int month;
	int day;	
} Date;

Date getEasterDate(int year);

#endif // __EASTER_DATE_H__
