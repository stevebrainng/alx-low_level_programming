#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entery point
 * if() - Check against a condition
 * Return: Always (0) success
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if ( n > 0 )
        {
		c = scanf( "%d", &n );
		printf( c "is positive" );
        } 
	else if ( n == 0 )
        {
		c = scanf( "%d", &n );
                printf( c "is zero" );
        }
        else if ( n < 0 )
        {
		c = scanf( "%d", &n );
                printf( c "is negative");
        }
	return (0);
}
