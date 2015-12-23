/**
 * @Problem		: Q2. sentense print
 * @Date		: 2015.12.23
 * @name 		: ngh
 * @description : print escape sequence characters.
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", "Somebody once said, \"Who\'s responsible for the riots?");
	printf("%s\n", "The rioters.\"");	
	printf("%s\n", "\'a\' and \"A\" mean different things.");
	printf("%s\n", "A backslash, \\, preceding a character is called");
	printf("%s\n", "You must escape the ability of the \" to terminate");
	printf("%s\n", "a string constant");
	printf("%s\n", "by using \\\", or the ability of the \\ to escape, by using \\\\.");
	printf("%s\n", "A stray \\, say \\z, in a string constant will have");
	printf("%s\n", "different effects on different compilers.");
	printf("%s\n", "\\n is a new line character.");
	printf("%s\n", "\\r a carriage return");
	printf("%s\n", "\\t a tab");
	printf("%s\n", "\\a an alert");
	printf("%s\n", "\\\\ a backslash");
	printf("%s\n", "\\\' a single quote");
	printf("%s\n", "\\\" a double quote");
	printf("%s\n", "\"\\n\\r\\t\\a\\\\\\\'\\\"\" is a string of escape sequence characters.");

	return 0;
}