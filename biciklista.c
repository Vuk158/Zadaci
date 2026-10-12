#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float v0,v1,a,t,s;
    printf("Unesi pocetnu brzinu:\n");
    scanf("%f",&v0);
    printf("Unesi brzinu:\n");
    scanf("%f",&a);
    t = 60;
    v1 = v0 + a*t;
    s = v0*t + (a*t*t)/2;
    printf("Predjeni put je: %.2f\n",s);
    printf("Krajnja brzina je: %.2f\n",v1);
    return 0;
}