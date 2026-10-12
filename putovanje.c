#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float v,s,t;
    printf("Unesi brzinu: \n");
    scanf("%f",&v);
    printf("Unesi duzinu: \n");
    scanf("%f",&s);
    t = s/v;
    printf("Vreme je: %.2f\n",t);
    return 0;
}