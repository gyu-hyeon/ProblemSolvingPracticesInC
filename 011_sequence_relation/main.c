/**
 * @Problem		: Q11. sequence relation
 * @Date		: 2015.12.24
 * @name 		: ngh
 * @description : get relation between two number in sequence
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Relation.h"
 
int main(int argc, char const *argv[])
{
	FILE* fp;
	int nCase;
	
	int (*relationFunc[])(int, int) = { isGreaterThanOrEqual, isLessThanOrEqual, isEqual, isSubGreaterThanFive, isMultipleOf, NULL };
	int* arr;
	int n, i, j;
	int result[5];
	
	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		memset(result, 0, sizeof(result));
		fscanf(fp, "%d", &n);
		arr = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; ++i) 
			fscanf(fp, "%d", arr + i);
		
		for (i = 1; i < n; ++i)
			for (j = 0; relationFunc[j]; ++j) 
				result[j] += relationFunc[j](arr[i - 1], arr[i]);

		for (i = 0; i < 5; ++i)	
			printf("%d ", result[i]);
	
		printf("\n");
		free(arr);
	}

	fclose(fp);
	return 0;
}