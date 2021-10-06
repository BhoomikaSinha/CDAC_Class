#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("enter two numbers in inputs \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("(swap two values) a value is %d:\n",a);
    printf("(swap two values) b value is %d:\n",b);
    
    return 0;
}
