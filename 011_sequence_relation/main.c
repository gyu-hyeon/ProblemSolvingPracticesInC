/**
 * @Problem		: Q11. sequence relation
 * @Date		: 2015.12.24
 * @name 		: ngh
 * @description : get relation between two number in sequence
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ABS(x) (((x) > 0) ? (x) : (-(x)))
 
int main(int argc, char const *argv[])
{
	FILE* fp;
	int nCase;
	int* arr;
	int n, i;
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

		for (i = 0; i < n; ++i) fscanf(fp, "%d", arr + i);
		for (i = 1; i < n; ++i)
		{
			if (arr[i - 1] >= arr[i]) ++result[0];
			if (arr[i - 1] <= arr[i]) ++result[1];
			if (arr[i - 1] == arr[i]) ++result[2];
			if (ABS(arr[i - 1] - arr[i]) > 5) ++result[3];
			if (arr[i - 1] % arr[i] == 0 || arr[i] % arr[i - 1] == 0) ++result[4];
		}
		
		for (i = 0; i < 5; ++i)	printf("%d ", result[i]);
		printf("\n");
		free(arr);
	}

	fclose(fp);
	return 0;
}