#include "main.h"
char *_strchr(char *s, char c)
{
	char **p = &s;
	char *q = &c;
	
	while (**p && **p != *q)
		++*p;
	if (*q == **p)
		return ((char *)(*p));
	else
		return ((char *)(NULL));
}

char *_strpbrk(char *s, char *accept)
{
    if((s == NULL) || (accept == NULL))
        return NULL;
    while(*s)
    {
        if(_strchr(accept, *s))
        {
            return s;
        }
        else
        {
            s++;
        }
    }
    return (NULL);
}
