/**
 * @Problem		: Q4. integer operation
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : perform various integer operation 
 */
#include <stdio.h>
#include <stdlib.h>
#include "IntegerOperation.h"

int main(int argc, char const *argv[])
{
	FILE * fp;
	int nCase;
	int a, b;

	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		fscanf(fp, "%d %d", &a, &b);
		printIntegerOperation(a, b);
	}

	fclose(fp);
	return 0;
}