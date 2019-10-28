#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	int64_t * array = malloc(100 * sizeof(int64_t));
	free(array);

	for (uint8_t i = 0; i < 100; i++)
	{
		printf("%i\t%d\n", i, array[i]);
	}
}
