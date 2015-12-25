/**
 * @Problem		: Q17. coin change
 * @Date		: 2015.12.25
 * @name 		: ngh
 * @description : make minimize number of coins
 * 				: merry christmas...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int descending(const void * coin1, const void * coin2)
{
	return *(int*)coin1 < *(int*)coin2;
}

int greedyApproach(int coins[], int nCoin[], int n, int change)
{
	int nCoins = 0;
	int i;

	qsort(coins, n, sizeof(int), descending);

	for (i = 0; i < 7; ++i)
		while (change - coins[i] >= 0)
			++nCoin[i], ++nCoins, change -= coins[i];

	return nCoins;
}

int main(int argc, char const *argv[])
{
	FILE* fp;
	int nCase;
	
	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		int coins[] = { 250, 100, 50, 25, 10, 5, 1 };
		int nCoin[7] = { 0 };
		int change;
		int i;
		fscanf(fp, "%d", &change);

		// this is greedy approach. but original method is dp
		printf("%d\n", greedyApproach(coins, nCoin, sizeof(coins) / sizeof(int), change));
		for (i = 0; i < 7; ++i)
			printf("%d ", nCoin[i]);
		printf("\n");
	}	

	fclose(fp);
	return 0;
}