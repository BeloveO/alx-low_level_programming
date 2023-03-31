#include <stdio.h>
/**
 * hare - prints a string before main function is executed
*/
void __attribute__((constructor)) hare()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
