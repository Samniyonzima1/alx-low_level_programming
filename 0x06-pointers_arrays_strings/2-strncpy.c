#include"main.h"

/**
 *_strncpy - copies atmost an inputted number
 *from string src to into dest
 *@dest: The buffer storing the string
 *@src: the source string
 *@n: the maximum number of bytes to be copied from the source
 *Return: a pointer to the reulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
