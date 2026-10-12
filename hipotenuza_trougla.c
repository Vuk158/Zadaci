#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    double c;

    printf("unesi duzinu katete a\n");
    scanf("%d", &a);
    printf("unesi duzinu katete b\n");
    scanf("%d", &b);

    c = sqrt(a * a + b * b);
    printf("duzina hipotenuze C = %.2f\n", c);

    return 0;
}