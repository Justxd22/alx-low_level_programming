#include <stdio.h>


void run(void) __attribute__((constructor));

/**
 * run - first func to run
 * No Return
 */
void run(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
