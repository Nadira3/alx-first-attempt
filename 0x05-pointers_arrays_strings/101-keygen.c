#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, m;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (m != 2772)
	{
		i = k = m = 0;
		while ((2772 - 122) > m)
		{
			j = rand() % 62;
			p[i] = c[j];
			m += c[j];
			i++;
		}
		while (c[k])
		{
			if (c[k] == (2772 - m))
			{
				p[i] = c[k];
				m += c[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
