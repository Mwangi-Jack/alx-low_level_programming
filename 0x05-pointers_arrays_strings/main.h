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


/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str);



/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n);





/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src);


/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s);

#endif
