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
		for (i = (number >> 1), position = 0; i != 0; ++position)
			i >>= 1;

		result = position;
	}
	return 0;
}
