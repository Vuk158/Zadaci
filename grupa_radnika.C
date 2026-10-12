#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    float s,x;
    printf("Unesite broj radnika:\n");
    scanf("%d",&n);
    printf("Unesite broj sati:\n");
    scanf("%d",&s);
    printf("Unesite koliko je jos radnika doslo:\n");
    scanf("%d",&m);
    x=1.0*n*s/(m+n);
    printf("Vreme za koj se posao zavrsi je %f sati \n",x);
    return 0;
}