#include "IntegerOperation.h"
#include <stdio.h>
#include <stdlib.h>

void printIntegerOperation(int num1, int num2)
{
	int i;
	int (*integerOperatorPtr[])(int, int) = {add, sub, absSub, mult, quotient, remainde, max, isEqual, NULL}; 

	for (i = 0; integerOperatorPtr[i]; ++i)
	{
		printf("%d ", integerOperatorPtr[i](num1, num2));
	}

	printf("\n");
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int absSub(int num1, int num2)
{
	int result = num1 - num2;
	return result > 0 ? result : -result;
}

int mult(int num1, int num2)
{
	return num1 * num2;
}

int quotient(int num1, int num2)
{
	return num1 / num2;
}

int remainde(int num1, int num2)
{
	return num1 % num2;
}

int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int isEqual(int num1, int num2)
{
	return num1 == num2 ? 1 : 0;
}
