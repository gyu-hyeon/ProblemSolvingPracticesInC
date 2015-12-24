/**
 * @Problem		: Q16. number of last zero
 * @Date		: 2015.12.25
 * @name 		: ngh
 * @description : what is last two digit in mult of numbers?
 * 				: merry christmas...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(a, b) (((a) > (b)) ? (b) : (a))

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
		int n, temp;
		int nTwo = 0, nFive = 0;

		fscanf(fp, "%d", &n);
		while (n--)
		{
			fscanf(fp, "%d", &temp);
			while (temp % 2 == 0) ++nTwo, temp /= 2;
			while (temp % 5 == 0) ++nFive, temp /= 5;
		}

		printf("%d\n", MIN(nTwo, nFive));
	}

	fclose(fp);
	return 0;
}