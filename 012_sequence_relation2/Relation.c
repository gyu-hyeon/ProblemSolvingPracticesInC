#include "Relation.h"

int isAscending(int num1, int num2, int num3)
{
	return (num1 <= num2) && (num2 <= num3);
}

int isDescending(int num1, int num2, int num3)
{
	return (num1 >= num2) && (num2 >= num3);
}

int isAllEqual(int num1, int num2, int num3)
{
	return (num1 == num2) && (num2 == num3);
}

int isPartialEqual(int num1, int num2, int num3)
{
	return ((num1 == num2) && (num1 != num3)) 
	|| ((num1 == num3) && (num1 != num2)) 
	|| ((num2 == num3) && (num1 != num2));
}

int isAllDifferent(int num1, int num2, int num3)
{
	return (num1 != num2) && (num2 != num3) && (num1 != num3);
}
