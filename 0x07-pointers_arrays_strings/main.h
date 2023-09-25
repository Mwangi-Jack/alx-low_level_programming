#ifndef __MAIN_H__
#define __MAIN_H__

/**
 * _memset - function
 *
 * Description: This function fills memory with a constant byte
 *
 * @s:
 * @b:
 * @n:
 * Return: Returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - function
 * 
 * Description: This function copies memory area
 * 
 * @dest: this is where the memory area is copied to
 * @src: this is where the memory area is copied from
 * @n: this variable holds the number of bytes to copy
 * 
 * Return: the function returns a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n);


/**
 * _strchr- function
 *
 * Description: this function locates a character in a string
 *
 * @s: holds a string value to search from
 * @c: holds the character to search
 *
 * Return: returns a pointer to the first occurence or NULL if character is not found
*/

char *_strchr(char *s, char c);

/**
 * _strspn - function
 * 
 * Description: this functioin gets the length of a prefix substring
 * 
 * @s: string
 * @accept: string
 * 
 * Return: returns the number of bytes in the initial segment of @s
*/

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk- function
 * 
 * Description: this function searches a string for any of a set of bytes
 * 
 * @s: pointer of type char
 * @: pointer of type char
 * 
 * Return: returns a pointer to the byte in @s
*/

char *_strpbrk(char *s, char *accept);

#endif