#include <unistd.h>

void    a(int compteur)
{
        int     i;
        int     n;
	char	c;
	
	c = 43;
        i = 0;
        n = 10*compteur*compteur;
        while (i <  n )
	{
                write(1, &c, 1);
		i++;
	}
}

void main (void)
{
	a(40);
}
