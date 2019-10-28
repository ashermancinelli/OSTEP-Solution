#include <stdlib.h>

int main()
{
	int64_t * data = (int64_t *) malloc(100 * sizeof(int64_t));

	data[100] = 0;
}
