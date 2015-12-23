/**
 * @Problem		: Q6. range sum
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : get sum in range between num1 and num2 
 */
#include <stdio.h>
#include <stdlib.h>

int getSumInRange(int from, int to);

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
		printf("%d\n", getSumInRange(a, b));
	}

	fclose(fp);
	return 0;
}

int getSumInRange(int from, int to)
{
	return (from + to) * (to - from + 1) / 2;
}