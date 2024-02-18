#ifndef MAIN_H
#define MAIN_H

/* Constant Definitions */
#define FIELD_RANGE (17)

/* Function Prototypes */

// main.c
int main();

// shamir.c
int shamir(int n, int k, int s);
int polynomialConstruction(int secret, int k);
void printPoly(int poly[]);

#endif