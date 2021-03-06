//input a,n,r and output sum of corresponding Geometric Series
// a + a*r + a*r*r + a*r*r*r ...

#include <stdio.h>
#include <math.h>
int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Prints sum of geometric series.\n");
    int a, n, r;
    printf("Input first term, total terms, multiplying factor -> ");
    scanf("%d %d %d", &a, &n, &r);
    int sum = a * (pow(r, n) - 1) / (r - 1);
    printf("Geometric series sum = %d", sum);
    return 0;
}
