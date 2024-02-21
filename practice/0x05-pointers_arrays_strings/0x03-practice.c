#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
*/

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};


	printf("First: %d\n", arr[0]);
	printf("Address of First: %p\n", &arr[0]);

	printf("Second: %d\n", arr[1]);
	printf("Address of Second: %p\n", &arr[1]);

	printf("Third: %d\n", arr[2]);
	printf("Address of Third: %p\n", &arr[2]);

	printf("Fourth: %d\n", arr[3]);
	printf("Address of Fourth: %p\n", &arr[3]);

	printf("Fifth: %d\n", arr[4]);
	printf("Address of Fifth: %p\n", &arr[4]);


	printf("\n");
	printf("Address of Array: %p\n", arr);

	return (0);

}
