#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	uint64_t* ar = malloc(100 * sizeof(uint64_t));
	free(&ar[50]);

	for (int i = 0; i < 100; i++)
	{
		printf("%i\t%d\n", i, ar[i]);
	}
}
