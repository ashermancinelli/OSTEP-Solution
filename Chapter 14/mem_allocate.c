#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    // valgrind should show 1 byte lost
	int * ptr = malloc(sizeof(u_int8_t));

    // not free'ing
	return 0;
}
