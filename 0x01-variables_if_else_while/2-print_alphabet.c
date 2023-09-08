#include <stdio.h>

/**
 * main - Entry point
 *
 * Dscription: print alphabet in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabetOne[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	char alphabetTwo[] = {'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r'};
	char alphabetThree[] = {'s', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int count;
	int length1 = sizeof(alphabetOne) / sizeof(alphabetOne[0]);
	int length2 = sizeof(alphabetTwo) / sizeof(alphabetTwo[0]);
	int length3 = sizeof(alphabetThree) / sizeof(alphabetThree[0]);

	for (count = 0; count < length1; count++)
		putchar(alphabetOne[count]);
	for (count = 0; count < length2; count++)
		putchar(alphabetTwo[count]);
	for (count = 0; count < length3; count++)
		putchar(alphabetThree[count]);
	putchar('\n');
	return (0);
}
