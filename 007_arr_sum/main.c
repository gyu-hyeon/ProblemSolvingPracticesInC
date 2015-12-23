/**
 * @Problem		: Q7. arr sum
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : get sum in arr 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getSum(int arr[], int n);

int main(int argc, char const *argv[])
{
	FILE * fp;
	int nCase;
	int arr[10000];
	int n, i;

	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		memset(arr, 0, sizeof(arr));
		fscanf(fp, "%d", &n);
		for (i = 0; i < n; ++i) 
			fscanf(fp, "%d", arr + i);
		printf("%d\n", getSum(arr, n));
	}

	fclose(fp);
	return 0;
}

int getSum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum;
}
