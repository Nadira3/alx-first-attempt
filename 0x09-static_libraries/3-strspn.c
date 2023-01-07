#include "main.h"
/*int _strlen(char *s)
{
     int i = 0, n = 0;
     while (s[i] != '\0')
     {
         n++;
         i++;
     }
     return (i);
 }*/
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	while (*s)
	{
		while (*accept)
		{
			if  (*s == ' ')
				break;
			if (*s == *accept)
			{
				n++;
				break;
			}
			accept++;
		}
		s++;
	}
	return (n);
}
