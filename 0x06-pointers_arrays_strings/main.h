#ifndef __MAIN_H__
#define __MAIN_H__


/**
 * _strcat - Function
 * Description: This function concatenates two strings
 *
 * @dest: parameter to concatenate
 * @src: parameter to concatenate
 *
 * Return: returns a pointer to the resulting string
*/

char *_strcat(char *dest, char *src);


/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n);


/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */

int _strcmp(char *s1, char *s2);


/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n);



/**
 * string_toupper - uppers a lower
 * @s: character to make upper
 * Return: return value of upper
 */

char *string_toupper(char *s);


/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s);


/**
 * leet - leet
 * @s: string
 *
 * Return: char value
 */

char *leet(char *s);

#endif
