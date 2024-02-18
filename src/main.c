#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "main.h"

int main()
{
    srand(time(0));
    shamir(1, 2, 3);

    int n = 1;
    int k = 2;
    int secret = 3;

    int poly[k];
    poly[0] = secret;

    for (int i = 1; i < k; i++)
    {
        poly[i] = rand() % FIELD_RANGE;
    }

    printPoly(poly);
    return 0;
}