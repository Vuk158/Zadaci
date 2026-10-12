#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float d,v1,v2,vk,t,sk;
    printf("Unesi rastojanje brace:\n");
    scanf("%f",&d);
    printf("Unesi brzinu 1. brata:\n");
    scanf("%f",&v1);
    printf("Unesi brzinu drugog brata:\n");
    scanf("%f",&v2);
    printf("Unesi brzinu psa:\n");
    scanf("%f",&vk);
    vk = vk * 3.6;
    t = d / (v1+v2);
    sk = vk * t;
    printf("Predjeni put psa je: %2.f\n",sk);
    return 0;
}