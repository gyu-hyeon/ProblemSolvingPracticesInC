/**
 * @Problem		: Q5. easter date
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : when is easter date? 
 */
#include <stdio.h>
#include <stdlib.h>
#include "EasterDate.h"

int main(int argc, char const *argv[])
{
	FILE * fp;
	Date date;
	int nCase;
	int year;

	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		fscanf(fp, "%d", &year);
		date = getEasterDate(year);
		printf("%d %d\n", date.month, date.day);
	}

	fclose(fp);
	return 0;
}