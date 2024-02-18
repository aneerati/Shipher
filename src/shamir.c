#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

int shamir(int n, int k, int secret)
{
    printf("n=%d, k=%d, s=%d\n", n, k, secret);
    // polynomialConstruction(secret, k);
    return 0;
}

/*
int polynomialConstruction(int secret, int k)
{
    int poly[k];
    poly[0] = secret;

    printf("nums are: %d\n", rand() % FIELD_RANGE);

    for (int i = 1; i < k; i++)
    {
        int random_num = rand() % FIELD_RANGE;
        poly[i] = random_num;
    }

    printPoly(poly);

    return 0;
}
*/
void printPoly(int poly[])
{
    printf("\n");
    for (int i = 0; i < FIELD_RANGE; i++)
    {
        printf("%d, ", poly[i]);
    }
    printf("\n");
}
