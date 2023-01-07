#include "main.h"
int prime(int n)
{
    int i = 1;
    int result;
    
    if (n == 1)
        result = 1;
    else if (n % i == 0 && n > 1 && i <=n)
    {
        i++;
        result = 1 + prime(n);
    }
    return (result);
}
int is_prime_number(int n)
{
    int result;
    result = prime(n);
    
    if (result > 2)
    {	    
        return (0);
    }
    else if (result == 2)
        return (1);
}
