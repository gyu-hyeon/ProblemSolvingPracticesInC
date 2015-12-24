/**
 * @Problem		: Q12. sequence relation2
 * @Date		: 2015.12.25
 * @name 		: ngh
 * @description : get relation between three number in sequence
 * 				: merry christmas...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Relation.h"

int main(int argc, char const *argv[])
{
	FILE* fp;
	int nCase;
	int (*relationFunc[])(int, int, int) = { isAscending, isDescending, isAllEqual, isPartialEqual, isAllDifferent, NULL };
	
	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		int n, i, j;
		int arr[100] = { 0 };
		int result[5] = { 0 };

		fscanf(fp, "%d", &n);

		for (i = 0; i < n; ++i)
			fscanf(fp, "%d", arr + i);

		for (i = 2; i < n; ++i)
			for (j = 0; relationFunc[j]; ++j)
				result[j] += relationFunc[j](arr[i - 2], arr[i - 1], arr[i]);

		for (i = 0; i < 5; ++i)
			printf("%d ", result[i]);
		printf("\n");
	}

	fclose(fp);
	return 0;
}