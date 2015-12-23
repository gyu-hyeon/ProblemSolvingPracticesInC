/**
 * @Problem		: Q8. max min
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : find max and min value 
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
	FILE * fp;
	int nCase;
	int n, i, temp;
	int min, max;

	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		min = INT_MAX, max = INT_MIN;
			
		fscanf(fp, "%d", &n);
		while (n--)
		{
			fscanf(fp, "%d", &temp);
			min = min > temp ? temp : min;
			max = max > temp ? max : temp;
		}

		printf("%d %d\n", max, min);
	}

	fclose(fp);
	return 0;
}