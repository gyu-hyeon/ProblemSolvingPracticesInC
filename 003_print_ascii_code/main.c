/**
 * @Problem		: Q3. print ascii code
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : print ascii code except blank character like space.
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ch;
	for (ch = 33; ch <= 126; ++ch)
	{
		printf("%c %d %#o %#x\n", ch, ch, ch, ch);
	}

	return 0;
}