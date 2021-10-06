#include <stdio.h>
#include<math.h>

int main()
{
    int PAmaunt;
    int rate;
    int tPeriod;
    float totalAmount;
    float Ci;
    printf("enter principle amount\n");
    scanf("%d",&PAmaunt);
    printf("enter intrest rate\n");
    scanf("%d",&rate);
    printf("enter time period\n");
    scanf("%d",&tPeriod);
    totalAmount=PAmaunt*(pow((1+rate/100),tPeriod));
    Ci=totalAmount- PAmaunt;
    printf("compount intrest %f :",Ci);
    return 0;
}
