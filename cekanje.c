#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int sat1,min1,sek1,sat2,min2,sek2,vreme1,vreme2,cekanje,sat3,min3,sek3;
    printf("Unesi sate prvog: \n");
    scanf("%d",&sat1);
    printf("Unesi min prvog: \n");
    scanf("%d",&min1);
    printf("Unesi sekunde prvog: \n");
    scanf("%d",&sek1);
    printf("Unesi sate drugog: \n");
    scanf("%d",&sat2);
    printf("Unesi min drugog: \n");
    scanf("%d",&min2);
    printf("Unesi sekunde drugog: \n");
    scanf("%d",&sek2);
    vreme1 = sat1 * 3600 + min1 * 60 + sek1;
    vreme2 = sat2 * 3600 + min2 * 60 + sek2;
    cekanje = abs(vreme1 - vreme2);
    sat3 = cekanje / 3600;
    cekanje = cekanje % 3600;
    min3 = cekanje / 60;
    cekanje = cekanje % 60;
    sek3 = cekanje;
    printf("Vreme je %d:%d:%d\n",sat3,min3,sek3);
    return 0;
}