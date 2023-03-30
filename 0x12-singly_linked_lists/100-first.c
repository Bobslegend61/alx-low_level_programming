#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - runs before the main function
 *
 * Return: nothing to return
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
