#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main-main block */

/* main gives a random number to int/*
 * it executes and prints it/*
  * return (0)  */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
                printf("n is greater than zero");
        else if (n < 0)
                printf("n is less than 0");
        else
                printf("n is equal to zero");
        return (0);
}
