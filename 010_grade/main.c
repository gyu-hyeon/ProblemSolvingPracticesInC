/**
 * @Problem		: Q10. grade
 * @Date		: 2015.12.24
 * @name 		: ngh
 * @description : set grade for students
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char const *argv[])
{
	FILE * fp;
	int nCase;
	int nGrade[5]; // A B C D F
	int i, n, score;

	if (!(fp = fopen("input.txt", "r")))
	{
		printf("file open failed\n");
		exit(1);
	}

	fscanf(fp, "%d", &nCase);

	while(nCase--) 
	{
		memset(nGrade, 0, sizeof(nGrade));
		fscanf(fp, "%d", &n);
		while(n--)
		{
			fscanf(fp, "%d", &score);
			switch (score / 10)
			{
				case 10: case 9: nGrade[0]++; break;
				case 8: nGrade[1]++; break;
				case 7: nGrade[2]++; break;
				case 6: nGrade[3]++; break;
				default: nGrade[4]++;
			}
		}

		for (i = 0; i < 5; ++i) printf("%d ", nGrade[i]);
		printf("\n");
	}

	fclose(fp);
	return 0;
}