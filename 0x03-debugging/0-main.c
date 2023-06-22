#include <stdio.h>

/**
* main - Test funtion for positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	positive_or_negative(i);

	/*while (i < 10) */
	/*{ */
	/*      putchar(i);*/
	/*} */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
