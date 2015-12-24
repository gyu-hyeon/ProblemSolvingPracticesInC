#ifndef __RELATION_H__
#define __RELATION_H__

#include <stdlib.h>
#define ABS(x) (((x) > 0) ? (x) : (-(x)))

int isGreaterThanOrEqual(int num1, int num2);
int isLessThanOrEqual(int num1, int num2);
int isEqual(int num1, int num2);
int isSubGreaterThanFive(int num1, int num2);
int isMultipleOf(int num1, int num2);

#endif // __RELATION_H__
