/**
 * @Problem		: Q9. time calc
 * @Date		: 2015.12.24
 * @name 		: ngh
 * @description : sum time 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Time.h"
 
int main(int argc, char const *argv[])
{
	FILE * fp;
	Time t, result;
	int nCase;
	int nWorker;
	
	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		memset(&result, 0, sizeof(result));
		fscanf(fp, "%d", &nWorker);
		while(nWorker--)
		{
			fscanf(fp, "%d %d %d", &t.hour, &t.min, &t.sec);
			t.day = 0;
			result = addTime(result, t);	
		}

		printf("%d %d %d %d\n", result.day, result.hour, result.min, result.sec);
	}

	fclose(fp);
	return 0;
}