#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int H, S, D, J, n, m;

    printf("Unesi cetvorocifreni broj: n\n");
    scanf("%d", &n);
    J = n%10;
    n = n/10;
    D = n%10;
    n = n/10;
    S = n%10;
    n = n/10;
    H = n%10;
    m = J+D+S+H;
    printf("Zbir cifara je: %d\n", m);
    return 0;
}