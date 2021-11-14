#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    float c;
    float d;

    scanf("%i %i", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%i %i\n", a + b, a - b);
    printf("%.1f %.1f", c + d, c - d);

    return 0;
}