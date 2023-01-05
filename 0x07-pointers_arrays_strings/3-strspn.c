#include "main.h"
int _strlen(char *s)
{
     int i = 0;
     while (*s)
     {
         s++;
         i++;
     }
     return (i);
 }
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;
	unsigned int *p = &n;

	for (i = 0; i < _strlen(s)/*(sizeof(&s)/sizeof(&s[0]))*/; i++)
    {
        for (j = 1; j < _strlen(accept)/*(sizeof(&accept)/sizeof(&accept[0]))*/; j++)
        {
            if (s[i] == ' ')
		    break;
	    if (s[i] == accept[j])
            {
		    *p += 1;
            }
        else
            continue;
        }
    }
    return (n);
}
