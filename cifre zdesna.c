#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,x5,x6,n;
    printf("Unesi prvu cifru:\n");
    scanf("%d",&x1);
    printf("Unesi drugu cifru:\n");
    scanf("%d",&x2);
    printf("Unesi trecu cifru:\n");
    scanf("%d",&x3);
    printf("Unesi cetvrtu cifru:\n");
    scanf("%d",&x4);
    printf("Unesi petu cifru:\n");
    scanf("%d",&x5);
    printf("Unesi sestu cifru:\n");
    scanf("%d",&x6);
    n = x1 * 1 + x2 * 10 + x3 * 100 + x4 * 1000 + x5 * 10000 + x6 * 100000;
    printf("Broj je: %d\n",n);
    return 0;
}