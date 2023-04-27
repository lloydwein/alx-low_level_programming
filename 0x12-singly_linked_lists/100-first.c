#include "lists.h"

/**
 * before_main - function that executes automatically before the main function
 * Description: This function is marked with the attribute constructor which
 * means it will be executed automatically before the main function
 * is called. The purpose of this function is to perform any
 * necessary initialization tasks before the program starts executing.
 *
 * Return: No return value
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
