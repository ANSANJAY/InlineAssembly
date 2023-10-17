#include <stdio.h>


int main()
{
	int position = 0;
	long max_loops = 9990000;
	int number = 0;
	long i;
	int result;
	for (number = 1 ; number <= max_loops; number++)
	{
		asm("bsrl %1, %0"
				:"=r"(position) //output
				:"r"(number)); //input

		result = position;
	}
	return 0;
}
