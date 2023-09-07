#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print a sentence using write function
 *	ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: 1 (error)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
