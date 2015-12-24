/**
 * @Problem		: Q13. add even
 * @Date		: 2015.12.25
 * @name 		: ngh
 * @description : find number of odd, even
 * 				: merry christmas...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		int nOdd = 0, nEven	= 0;

		fscanf(fp, "%d", &n);
		while(n--)
		{
			fscanf(fp, "%d", &temp);
			if (temp % 2 == 0)
				++nEven;
			else
				++nOdd;
		}

		printf("%d %d\n", nOdd, nEven);
	}

	fclose(fp);
	return 0;
}