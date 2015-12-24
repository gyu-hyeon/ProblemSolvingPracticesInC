#include "Relation.h"

int isGreaterThanOrEqual(int num1, int num2)
{
	return num1 >= num2;
}

int isLessThanOrEqual(int num1, int num2)
{
	return num1 <= num2;
}

int isEqual(int num1, int num2)
{
	return num1 == num2;
}

int isSubGreaterThanFive(int num1, int num2)
{
	return ABS(num1 - num2) > 5;
}

int isMultipleOf(int num1, int num2)
{
	return !(num1 % num2 && num2 % num1);
}