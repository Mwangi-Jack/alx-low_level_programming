#ifndef __MAIN_H__
#define __MAIN_H__

/**
 * reset_to_98 - Function
 *
 * Description: updates the value of an int pointer to 98
 *
 * @n: the pointer to update its value
 *
 * Return: returns void
*/

void reset_to_98(int *n);


/**
 * swap_int - Function
 *
 * Description: This function swaps the value of two integers
 *
 * @a: a pointer to an integer value to swap with b
 *
 * @b : a pointer to an integer value to swap with a
 *
 * Return: returns void
*/

void swap_int(int *a, int *b);


/**
 * _strlen - Function
 *
 * @s: pointer to a string to return length
 *
 * Return: Always Success (0)
*/

int _strlen(char *s);


/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str);


/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s);


/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s);


/**
 * puts2 - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts2(char *str);

#endif
