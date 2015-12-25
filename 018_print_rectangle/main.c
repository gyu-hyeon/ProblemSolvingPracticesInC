/**
* @Problem		: Q18. print rectangle
* @Date			: 2015.12.25
* @name			: ngh
* @description	: print rectangle
*				: merry christmas...
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printRectangle(int row, int col);

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

	while (nCase--)
	{
		int col, row;
		fscanf(fp, "%d %d", &col, &row);
		printRectangle(row, col);
	}

	fclose(fp);
	return 0;
}

void printRectangle(int row, int col)
{
	int i, j;
	char** rectangle = (char**)malloc(sizeof(char*) * row);
	char* temp = (char*)malloc(sizeof(char) * row * (col + 1));

	memset(temp, '*', sizeof(char) * row * (col + 1));
	for (i = 0; i < row; ++i)
		rectangle[i] = temp + i * (col + 1), rectangle[i][col] = '\n';

	rectangle[row - 1][col] = '\0';

	for (i = 1; i < row - 1; ++i)
		memset(rectangle[i] + 1, '+', sizeof(char) * (col - 2));

	printf("%s\n", rectangle[0]);

	free(temp);
	free(rectangle);
}