#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float v1,v2,t,ts;
    printf("Unesite brzinu prvog: \n");
    scanf("%f", &v1);
    printf("Unesite brzinu drugog: \n");
    scanf("%f", &v2);
    printf("Unesite unesite vreme: \n");
    scanf("%f", &t);
    ts = (v2 / (v2-v1))*t;
    printf("ts = %f\n",ts);
    return 0;
}