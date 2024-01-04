#include<stdio.h>
int main()
{
    int a;
    printf("enter the integer");
    scanf("%d",&a);

    (a % 2 == 0) ? printf("%d is even number \n",a):printf("%d is  odd number \n",a);
    return 0;
}