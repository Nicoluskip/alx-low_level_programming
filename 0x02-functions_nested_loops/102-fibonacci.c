#include <stdio.h>
void print_fib_x50(void)
{
	unsigned int target;
	unsigned long int f, l, i, fib;

	f = 1;
	l = 2;
	target = 50 - 2;
	printf("1, 2, ");
	for (i = 0 ; i < target ; i++)
	{
		fib = f + l;
		printf("%lu", fib);
		f = l;
		l = fib;
		if (i < target - 1)
			printf(", ");
	}
	putchar('\n');
}



int main(void)
{
	print_fib_x50();
	return (0);
}


